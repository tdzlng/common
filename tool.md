## 1. Common software

valgrind        -> check dynamic allocate of C/C++ program 

everything      -> tool for searching file name

WinMerge        -> comparision code/doc

Qtranslate      -> translate a language

## 2. vscode extention

gitlens         -> check commit source line by line in local machine

readme-generator > gen preview README.md file 

codeSnap        -> Capture code in vscode

github copilot  -> AI tool

## 3. linux command

wget http://ftp.debian.org/debian/...    -> download package

sudo dpkg -i                             -> install .deb package

bzip2 -d file.bz2                        -> extract bzip2 file

watch                                    -> show change a varible in realtime

df -h                                    -> check disk/partition size

below that write partition sd card (`/dev/sdb`):
```bash
sudo dd if=/dev/zero of=/dev/sdb bs=512 count=1
sudo dd if=rooft.wic of=/dev/sdb bs=4M status=progress
sync
```
