# Open Operating System BY Kuunal Prajapati

* It is only a learing project not for production.
* You can try it without any permissions.
* If you want to make any change make it and let me know so that we can build it further together.
* In future I will also try to release a full featured version of it.

## Prerequisite
* Understanding of C/C++.
* Familiar with Ubuntu (linux Environment).
* A lot of patience ( not al thing works as expected and it take a lot of hardwork to make it work).

## My building environment
* Ubuntu 24.04 ( WSL2 in Windows 10)
* Visual Studio code (For Code)
* Virtual box in Windows 10 to test iso


 For running Ubuntu in wsl you can fing tons of tutorial and documentaion online and all the setup

## Required Packages
Not necessary required to build every operating sytem. Because you can build your operating system with some other programming language or environment.
All tese projects are for this project only.

* g++
* binutils
* libc6-dev-i386
* grub-legacy or grub
* xorriso

These are only few but i recommned you to install comlete gcc toolchain to get a better devlopment experience.

## How To Use

Just go and open Makefile and  run the all mmake commands in chronological  order. <br>

After executing last command 
```bash
make mykernel.iso
```
You will get an iso file. You can either make a bootable CD/DVD or Pendrive/FlashDrive (not Recommecnded) or just create a virtual machine to test the operating system. 
>**Note** :<br> 
> *First compile all the cpp files then loader file.After it create the mykernel.bin and the in last run the make kernel.iso*

# License
You are free to use it at your own risk and make changes for your own only. <br>
And I don't allow any commercial use of this oprating sytem. This is only to prevent us from any troble.

> [!WARNING]
> DON'T USE ANY ISO FILE FROM THE REPO ITSELF UNTILL YOU HAVE CREATED IT.
> THESE ISOS ARE VULNERABLE SO DONT TRY IT UNTILL IT IS IN RELEASE.
