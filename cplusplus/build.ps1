# take as input the path to the active file
param([string]$path)

$dirname = Split-Path $path -Parent
$filename = Split-Path $path -Leaf

# get file name without extension for $filename
$target = [System.IO.Path]::GetFileNameWithoutExtension($filename)

# change into the parent directory of $dirname
Set-Location "$dirname/.."
cmake --build build --config Debug --target $target
