// Copyright Algosyntax 2023. All Rights Reserved


#include "StaticMeshes/StaticMeshOps.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/StaticMeshSocket.h"

FVector UStaticMeshOps::GetStaticMeshDimensions(const UStaticMeshComponent* StaticMeshComponent)
{
	FVector Dimensions(0.f, 0.f, 0.f);
	

	if (StaticMeshComponent)
	{
		// Get the local bounds (not affected by rotation)
		FVector LocalMin, LocalMax;
		StaticMeshComponent->GetLocalBounds(LocalMin, LocalMax);
		FVector LocalSize = LocalMax - LocalMin;

		// Get the scale (not affected by rotation)
		FVector Scale = StaticMeshComponent->GetComponentTransform().GetScale3D();

		// Calculate the dimensions
		Dimensions = LocalSize * Scale;
	}

	return Dimensions;
}

UStaticMeshSocket* UStaticMeshOps::AddSocketToStaticMesh(UStaticMesh* StaticMesh)
{
	UStaticMeshSocket* Socket = NewObject<UStaticMeshSocket>(StaticMesh);

	StaticMesh->AddSocket(Socket);

	return Socket;
}

bool UStaticMeshOps::CopyTemplateSocketAlongAxis(UStaticMesh* InStaticMesh, EAxAxis InAxis, FName InTemplateSocketName,
                                                 FString InNewSocketsTag,
                                                 int32 NumSocketsToCreate, float InSocketsOffset)
{
	UStaticMeshSocket* TemplateSocket = InStaticMesh->FindSocket(InTemplateSocketName);

	if (!TemplateSocket)
		return false;

	FString TemplateNamePrefix;
	FString TemplateNamePostFixNumber;


	TemplateSocket->SocketName.ToString().Split("_",&TemplateNamePrefix,&TemplateNamePostFixNumber);
	int TemplateStartingNumber= FCString::Atoi(*TemplateNamePostFixNumber);


	TArray<UStaticMeshSocket*> Sockets = InStaticMesh->GetSocketsByTag(InNewSocketsTag);

	//remove the old sockets
	for (UStaticMeshSocket* Socket : Sockets)
	{
		InStaticMesh->RemoveSocket(Socket);
	}

	for (int i = TemplateStartingNumber; i < (TemplateStartingNumber+NumSocketsToCreate) ; i++)
	{
		UStaticMeshSocket* NewSocket = AddSocketToStaticMesh(InStaticMesh);
		NewSocket->Tag = InNewSocketsTag;

		FString NewSocketName= TemplateNamePrefix;
		NewSocketName+= ("_" + FString::FromInt(i+1));

		NewSocket->SocketName=(*NewSocketName);

		//first copy all transforms.
		NewSocket->RelativeLocation = TemplateSocket->RelativeLocation;
		NewSocket->RelativeScale = TemplateSocket->RelativeScale;
		NewSocket->RelativeRotation = TemplateSocket->RelativeRotation;


		switch (InAxis)
		{
			case EAxAxis::X:
			{
				NewSocket->RelativeLocation.X=(TemplateSocket->RelativeLocation.X + (InSocketsOffset*(i+1)));

				break;
			}
			case EAxAxis::Y:
			{
				NewSocket->RelativeLocation.Y = (TemplateSocket->RelativeLocation.Y + (InSocketsOffset * (i + 1)));


				break;
			}
			case EAxAxis::Z:
			{
				NewSocket->RelativeLocation.Z = (TemplateSocket->RelativeLocation.Z + (InSocketsOffset * (i + 1)));

				break;
			}
			default: ;
		}
	}

	bool bMarkedDirty = InStaticMesh->MarkPackageDirty();

	return true;
}

bool UStaticMeshOps::CopyTemplateSocketAlongAxisOnAssets(TArray<UObject*> InStaticMeshAssets, EAxAxis InAxis,
	FName InTemplateSocketName, FString InNewSocketsTag, int32 NumSocketsToCreate,
	float InSocketsOffset)
{
	

	for (UObject* Asset : InStaticMeshAssets)
	{
		UStaticMesh* StaticMesh = Cast<UStaticMesh>(Asset);

		if (StaticMesh)
		{
			CopyTemplateSocketAlongAxis(StaticMesh, InAxis, InTemplateSocketName, InNewSocketsTag, NumSocketsToCreate, InSocketsOffset);

		
		}
	}

	return true;
}

int32 UStaticMeshOps::DeleteSocketsByTag(TArray<UObject*> InStaticMeshAssets,  FString InSocketTag)
{
	int NumSocketsRemoved=0;

	for (UObject* Asset : InStaticMeshAssets)
	{
		UStaticMesh* StaticMesh = Cast<UStaticMesh>(Asset);

		if(!StaticMesh)
			continue;

		bool bMarkedDirty = false;

		TArray<UStaticMeshSocket*> Sockets = StaticMesh->GetSocketsByTag(InSocketTag);

		for (UStaticMeshSocket* Socket : Sockets)
		{
			StaticMesh->RemoveSocket(Socket);
			NumSocketsRemoved++;

			if (!bMarkedDirty)
				bMarkedDirty = StaticMesh->MarkPackageDirty();
		}
	}

	return NumSocketsRemoved;
}

int32 UStaticMeshOps::DeleteSocketsByNamePrefix(TArray<UObject*> InStaticMeshAssets, FString InNamePrefix, FString SuffixFilter)
{
	int NumSocketsRemoved = 0;

	for (UObject* Asset : InStaticMeshAssets)
	{
		
		UStaticMesh* StaticMesh = Cast<UStaticMesh>(Asset);
	
		if (!StaticMesh)
			continue;

		bool bMarkedDirty = false;

		TArray<UStaticMeshSocket*> Sockets = StaticMesh->Sockets;

		for (UStaticMeshSocket* Socket : Sockets)
		{
			if(Socket->SocketName.ToString().StartsWith(InNamePrefix))
			{
				//filter
				if (Socket->SocketName.ToString().EndsWith(SuffixFilter))
					continue;

				StaticMesh->RemoveSocket(Socket);
				
				NumSocketsRemoved++;

				if(!bMarkedDirty)
					bMarkedDirty=StaticMesh->MarkPackageDirty();
			}
			
		}
	}

	return NumSocketsRemoved;
}


