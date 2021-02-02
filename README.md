# passwds-gen
A simple command-line program to generate a list of passwords.

## Table of contents
* [Overview](#overview)
* [To do](#to-do)
* [Releases](#releases)
* [Requirements](#requirements)
* [Installation](#installation)
    * [Windows](#windows)
    * [Mac OS](#mac-os)
    * [Linux and FreeBSD](#linux-and-freebsd)
* [Building from source](#building-from-source)
* [Usage examples](#usage-examples)

## Overview
passwds-gen is a simple C++ command-line program which generates a list of passwords. Each password is a sequence of random letters or numbers. The default number of passwords generated is one, however, the user can specify the number of passwords to be generated using passwd-gen's `-n` flag. The length of the password can be set in a similar fashion using the `-l` flag. For more information on usage see [Usage examples](#usage-examples).

## To do
* Make the readme short and concise.

## Releases
There are three types of passwds-gen releases: stable, beta, and unstable. When the repository reaches a beta version, the git commit name will be prefixed with X.XX-BETA (with 'X.XX' being the program version number). The same goes for stable versions, except that the git commit will be prefixed by X.XX-STABLE. All other versions in this GitHub repository are treated as unstable.

Installers for the latest passwds-gen stable and beta releases will be available in the [releases](https://github.com/anthello147/passwds-gen/releases) tab. Most users will want this option. For installation instructions see [Installation](#installation). 

**Latest stable release:** none.<br>
**Latest beta release:** 0.30.

## Requirements
* A computer running Windows, Mac OS, Linux, or FreeBSD (may run on other operating systems; currently these are the only tested platforms)
* A command-line interface (such as a virtual terminal or a graphical terminal emulator)
* (If building from source) A C++ compiler 

## Installation
To download, see the [Releases](#releases) section, where you will find packages for Windows, Mac OS, Linux, and FreeBSD. Download the package for your operating system and extract it.

On Windows, right-click on the ".bat" file in the extracted package and click "Run as administrator". The installation process from that point on should be straightforward. For usage after installation see the [Usage examples](#usage-examples).

On Unix-like systems (Mac OS, Linux, FreeBSD), you will need to open Terminal, and run the following commands as root/administrator, replacing `/home/foobar/Downloads` with the path of your extracted package:
```commandline
# cd /home/foobar/Downloads
# ./passwds-gen-0.30-beta-setup.sh
``` 
For usage after installation see [Usage examples](#usage-examples).

## Building from source
To build from source you will need a C++ compiler. Compilation is simple, as there is only one file to compile. The following steps will involve the use of the G++ compiler on different operating systems.

#### Windows:
Note: If you are building on a 32-bit machine, replace "Program Files" with "Program Files (x86)" in the following instructions.

At the command-line, change your current directory to the location of the downloaded source code using the `cd` command (replace `C:\Users\foobar\Downloads` with the location of your downloaded source code):
```commandline
C:\Users\foobar> cd "C:\Users\foobar\Downloads"
```
Then, compile the source code:
```commandline
C:\Users\foobar\Downloads> g++ passwds-gen.cpp -o passwds-gen.exe
```
After.that create the folder `passwds-gen` in the folder `C:\Program Files` and move the compiled passwds-gen.exe file to the newly created folder. This may ask you for administrative privileges with a system dialog window. When it pops up, agree to use administrative privileges to move the file.

Because you will need to quickly launch passwds-gen from Command Prompt, you will need to add the installation directory to PATH. The following instructions to add the installation directory to PATH have only been tested on Windows 10. If you have an earlier version of Windows, there should be plenty of tutorials on the internet on setting environment variables; consult those.

To add the `C:\Program Files\passwds-gen` folder to PATH, you will need to be an administrator. In the administrator's account, open Control Panel. Navigate to System and Security > System > Advanced system settings. This will open a new window. In the bottom right corner of this new window there should be a button called 'Environment variables'. Click that, which will open another window.

In this window, in the bottom area under the heading "System variables", select the row that says "Path" and press the "Edit" button at the bottom of the window. This will open another window.

This new window should have multiple rows. On the right, press "New" and you will see a cursor in the first free row available. In that row, type in `C:\Program Files\passwds-gen\`. When you are finished, press the "OK" button. You are now ready to use passwds-gen.

#### Mac OS:
At the command-line, change your current directory to the location of the downloaded source code using the `cd` command (replace `/Users/foobar/Downloads` with the location of your downloaded source code):
```commandline
$ cd /Users/foobar/Downloads
```
Then, compile the source code:
```commandline
$ g++ passwds-gen.cpp -o passwds-gen
```
At this point, you will need to move the compiled program to `/usr/local/bin` with root/administrative privileges:
```commandline
# mv passwds-gen /usr/local/bin/passwds-gen
```

#### Linux and FreeBSD:
At the command-line, change your current directory to the location of the downloaded source code using the `cd` command (replace `/home/foobar/Downloads` with the location of your downloaded source code):
```commandline
$ cd /home/foobar/Downloads
```
Then, compile the source code:
```commandline
$ g++ passwds-gen.cpp -o passwds-gen
```
At this point, you will need to move the compiled program to `/usr/local/bin` with root/administrative privileges:
```commandline
# mv passwds-gen /usr/local/bin/passwds-gen
```

## Usage examples
To use passwds-gen, open a Terminal/Command Prompt and execute one of the commands shown in the below usage examples. If you are unsure, you can always just type `passwds-gen` into your Terminal or `passwds-gen --help`.

Note: do not type in the '$' sign at the Terminal/Command Prompt when executing these commands. It is simply there to show the required user privileges.

Without command-line flags or options:
```commandline
$ passwds-gen
bE78gjjZ
```

When specifying the number of passwords to generate:
```commandline
$ passwds-gen -n 5
JpB8BtHP
xGiGo5pd
ImsxDOGS
adSPW5uw
nVxQh5xE
```

When specifying the character length of the passwords to generate:
```commandline
$ passwds-gen -l 15
nSYixV7E2dWtWjA
```

When specifying both the number of passwords and the character length:
```commandline
$ passwds-gen -n 5 -l 15
dcULRl3eZIlvcT6
nvxS3GMR8jw8ZSS
pXVczDquHg4UD8G
zl2Y6WyIEyU3xML
g2z47Yznm8vgUZe
```
