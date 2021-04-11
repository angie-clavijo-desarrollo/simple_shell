# Simple Shell <img src="https://raw.githubusercontent.com/MartinHeinz/MartinHeinz/master/wave.gif" width="30px">
<p align= "center">

The Simple Shell is a interpreter of commands line user interface.
The Thompson shell is the first Unix shell, in the first version of Unix in 1971, and was written by Ken Thompson

<hr>

<p align= "center">

### Description ✒️

This repository show how creating the Shell.

<hr>
<p align= "center">

### Pre-requirements 📋
You need have:
* Editors `vi`, `vim`, `emacs`
* Your files will be compiled on Ubuntu 14.04 LTS
* Your programs and function will be compiled with `gcc 4.8.4` and using flags `-Wall -Werror -Wextra -pedantic`
* A `README.md` file at the root of the folder
* your code should use the `Betty` style.
* Your shell should not have any memory leaks


<hr>

<p align= "center">

###  Allowed functions and system calls 🔧

* `access`  (man 2 access)
* `chdir` (man 2 chdir)
* `close` (man 2 close)
* `closedir` (man 3 closedir)
* `execve` (man 2 execve)
* `exit` (man 3 exit)
* `_exit` (man 2 _exit)
* `fflush` (man 3 fflush)
* `fork` (man 2 fork)
* `free` (man 3 free)
* `getcwd` (man 3 getcwd)
* `getline` (man 3 getline)
* `getpid` (man 2 getpid)
* `isatty` (man 3 isatty)
* `kill` (man 2 kill)
* `malloc` (man 3 malloc)
* `open` (man 2 open)
* `opendir` (man 3 opendir)
* `perror` (man 3 perror)
* `read` (man 2 read)
* `readdir` (man 3 readdir)
* `signal` (man 2 signal)
* `stat` (man 2 stat)
* `lstat` (man 2 lstat)
* `fstat` (man 2 fstat)
* `strtok` (man 3 strtok)
* `wait` (man 2 wait)
* `waitpid` (man 2 waitpid)
* `wait3` (man 2 wait3)
* `wait4` (man 2 wait4)
* `write` (man 2 write)

<hr>

### How install 🚀

##### Clone this repository
```
$ git clone https://github.com/angie-clavijo-desarrollo/simple_shell.git
```

### Compilation 🚩
```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
### Execute 💥
```
$ ./hsh
``` 

### Interactive mode ⚡️

```
./hsh
$ /bin/ls
```

### Non - interactive mode 🧐

```
echo echo "/bin/ls" | ./hsh
```

### Output 🔍️

```
hsh main.c shell.c
```
<hr>

### Built-in commands 📌

```
$ exit 
$ env
```

<hr>

### Authors 👷

Julieth Gonzalez
<a href=https://github.com/jyuly12>jyuli12</a>

Carlos Polania
<a href="https://github.com/capolaniaq">capolaniaq</a>

Angui Clavijo
<a href="https://github.com/angie-clavijo-desarrollo">angie-clavijo-desarrollo</a>






<p align= "center">

<hr>

#### Holberton School Colombia 🇨🇴
#### Cohort 14 🤓
#### Bog-0121 😊



