Week 1 - Linux Basics and C Programming
Objective
Learn basic Linux file operations, package management, and C program compilation using GCC.

File Operations
Create Directory

mkdir linux_lab
Change Directory

cd linux_lab
Create File

touch greeting.txt
View File Contents

cat greeting.txt
Copy File

cp greeting.txt backup.txt
Move/Rename File

mv backup.txt old_greeting.txt
Delete File

rm old_greeting.txt
Remove Empty Directory

rmdir folder_name
Remove Directory With Contents

rm -r folder_name
Package Management
Update Packages

sudo apt update
Install GCC Tools

sudo apt install build-essential
Check GCC Version

gcc --version
C Programming
Compile Program

gcc hello.c -o hello_program
Compile With Warnings

gcc -Wall hello.c -o hello_program_warn
Run Program

./hello_program
Permission Commands
Check Permissions

ls -l
Detailed Listing

ls -lh
Files Included
Lab1 Task.pdf
hello.c
greeting.txt
README.md
Quick Reference
Command	Purpose
mkdir	Create directory
cd	Change directory
touch	Create file
cat	Display file
cp	Copy file
mv	Move/Rename file
rm	Delete file
rmdir	Remove empty directory
apt update	Update repositories
apt install	Install packages
gcc	Compile C code
./program	Run executable
