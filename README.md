# Simple Shell


## Description

Simple Shell is a lightweight command-line interface (CLI) application that provides basic shell functionalities. It supports interactive and non-interactive modes, handles the exit command, and allows execution of commands from the PATH.

## Usage

### Interactive Mode

To start the interactive mode, simply run the shell executable:
```bash
$ ./shell
```

You will be presented with a command prompt where you can enter commands. The shell will execute the commands and display the output.

```bash
$ ./shell
shell> ls
file1.txt  file2.txt  directory/
shell> pwd
/home/user
shell> exit
$
```

### Non Interactive Mode

To use the shell in non-interactive mode

```bash
$ echo "ls -la" | ./shell
```

### PATH Commands

The shell can execute commands from directories listed in the PATH environment variable. When a command is entered, the shell searches for an executable with the same name in each directory listed in the PATH.

For example, if the PATH variable is set as follows:

```bash
$ echo $PATH
/usr/local/bin:/usr/bin:/bin
```

And you enter the command ls, the shell will search for an executable called ls in /usr/local/bin, /usr/bin, and /bin (in that order) and execute the first one found.

```bash
$ ./shell
shell> ls
file1.txt  file2.txt  directory/
```

### Exiting the Shell

To exit the shell, simply type exit and press Enter. The shell will terminate and return you to the original shell or program.

```bash
$ ./shell
shell> exit
$
```

### Installation

Installation
To compile and run the Simple Shell project, follow these steps:

1. Clone the repository or download the source code:

```bash
$ git clone https://github.com/your-username/simple-shell.git
$ cd simple-shell
```

2. Compile the source code using a C compiler:

```bash
$ gcc -o shell main.c
```

3. Run the shell:

```bash
$ ./shell
```

###CREATOR

This shell was created by shalom Ogoziem
