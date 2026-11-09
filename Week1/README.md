# Week 1 - Linux Basics and C Programming

---

## File Operations

### Create Directory

```bash
mkdir linux_lab
```

### Change Directory

```bash
cd linux_lab
```

### Create File

```bash
touch greeting.txt
```

### View File Contents

```bash
cat greeting.txt
```

### Copy File

```bash
cp greeting.txt backup.txt
```

### Move / Rename File

```bash
mv backup.txt old_greeting.txt
```

### Delete File

```bash
rm old_greeting.txt
```

### Remove Empty Directory

```bash
rmdir folder_name
```

### Remove Directory and Contents

```bash
rm -r folder_name
```

---

## Package Management

### Update Packages

```bash
sudo apt update
```

### Install GCC Tools

```bash
sudo apt install build-essential
```

### Check GCC Version

```bash
gcc --version
```

---

## C Programming

### Compile Program

```bash
gcc hello.c -o hello_program
```

### Compile With Warnings

```bash
gcc -Wall hello.c -o hello_program_warn
```

### Run Program

```bash
./hello_program
```

---

## Files Included

- Lab1 Task.pdf
- hello.c
- greeting.txt
- README.md

---

## Quick Reference

| Command | Purpose |
|----------|----------|
| mkdir | Create directory |
| cd | Change directory |
| touch | Create file |
| cat | Display file |
| cp | Copy file |
| mv | Move/Rename file |
| rm | Delete file |
| rmdir | Remove empty directory |
| apt update | Update package list |
| apt install | Install package |
| gcc | Compile C code |
| ./program | Run executable |
