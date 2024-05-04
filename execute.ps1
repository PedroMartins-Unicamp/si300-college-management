g++ .\main.cpp -o .\main $(Get-ChildItem -Path .\src\ -Filter *.cpp -Recurse) -ErrorAction SilentlyContinue; .\main.exe; Remove-Item .\main.exe
