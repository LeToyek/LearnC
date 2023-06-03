## C Journey
To install C on Windows, you need to make sure that u have cmd then u have to install the package manager called chocolatey (u have to run cmd as admin )
```bash
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```
Then u have to add package called cmake
```bash
choco install cmake --installargs 'ADD_CMAKE_TO_PATH=System'
```
After that, open your developer shell for vs then go to the root directory
```bash
cd ~
```
then you can make folder
```bash
mkdir Projects
```
next make file
```bash
ni hello.c
```
ni stands from new-item
then u can open the file, you can use any text editor but i prefer to use neovim
```bash
nvim hello.c
```

to build with cmake u can do this
```bash
cmake -G "NMake Makefiles" ..
```
