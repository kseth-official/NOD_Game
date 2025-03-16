# PowerShell script to clean Unreal Engine project

Write-Host "Cleaning your project, please wait..."

# Define directories to clean
$directoriesToClean = @("Binaries", "Build", "Intermediate", "Saved", "DerivedDataCache")

# Loop through directories and remove them if they exist
foreach ($dir in $directoriesToClean) {
    Get-ChildItem -Path $PSScriptRoot -Recurse -Directory | 
    Where-Object { $_.Name -eq $dir } | 
    ForEach-Object {
        Remove-Item $_.FullName -Recurse -Force
        Write-Host "Removed $($_.FullName)"
    }
}

# Remove .sln files
Get-ChildItem -Path $PSScriptRoot -Filter "*.sln" -File | 
ForEach-Object {
    Remove-Item $_.FullName -Force
    Write-Host "Removed $($_.FullName)"
}

Write-Host "Your project cleaned perfectly."
