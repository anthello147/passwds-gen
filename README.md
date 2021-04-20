# passwds-gen
A simple command-line program to generate a list of passwords.

## Table of contents
* [Releases](#releases)
* [Requirements](#requirements)
* [Installation](#installation)
    * [Windows](#windows)
    * [Mac OS, Linux, and FreeBSD](#mac-os-linux-and-freebsd)
* [Building from source](#building-from-source)
* [Usage examples](#usage-examples)

## Releases
Installers for stable and beta releases of passwds-gen are available in the [releases](https://github.com/anthello147/passwds-gen/releases) tab. For installation instructions see [Installation](#installation). 

**Latest stable release:** none.<br>
**Latest beta release:** 0.30.

## Requirements
* A computer running Windows, Mac OS, Linux, or FreeBSD (may run on other operating systems; currently these are the only tested platforms)
* A command-line interface (such as a virtual terminal or a graphical terminal emulator)
* (If building from source) A C++ compiler 

## Installation
In the [releases](#releases) tab, find and download the package for your operating system.

On Windows, right-click on the ".bat" file in the extracted package and click "Run as administrator". The installation process from that point on should be straightforward.

On Unix-like systems (Mac OS, Linux, FreeBSD), you will need to open Terminal, and run the following commands as root/administrator, replacing `/home/foobar/Downloads` with the path of your extracted package:
```commandline
# cd /home/foobar/Downloads
# ./passwds-gen-0.30-beta-setup.sh
``` 
For usage after installation see [Usage examples](#usage-examples).

## Building from source

#### Windows:
At the command-line, change your working directory to the location of the downloaded source code (replace `C:\Users\foobar\Downloads` with the location of your downloaded source code):
```commandline
C:\Users\foobar> cd "C:\Users\foobar\Downloads"
```
Then, compile:
```commandline
C:\Users\foobar\Downloads> g++ passwds-gen.cpp -o passwds-gen.exe
```
After that create the folder `passwds-gen` in `C:\Program Files` and move the compiled passwds-gen.exe file to the newly created folder. A dialog may pop up asking for administrative privileges to move the file; agree to this.

You will then need to add `C:\Program Files\passwds-gen` to PATH. You can do this through Control Panel.

#### Mac OS, Linux, and FreeBSD:
At the command-line, change your working directory to the location of the downloaded source code (replace `/home/foobar/Downloads` with the location of your downloaded source code):
```commandline
$ cd /home/foobar/Downloads
```
Then, compile the source code:
```commandline
$ g++ passwds-gen.cpp -o passwds-gen
```
After that, move the compiled program to `/usr/local/bin` with root/administrative privileges:
```commandline
# mv passwds-gen /usr/local/bin/passwds-gen
```

## Usage examples
To use passwds-gen, open Terminal/Command Prompt and execute one of the commands shown in the below usage examples. If you are unsure, you can always just type `passwds-gen -h` into Terminal.

Note: do not type in the '$' sign in Terminal/Command Prompt when executing these commands. It is simply there to show the required user privileges.

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

You can also use both flags simulatenously to specify both the number and length of passwords to generate.
