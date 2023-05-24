#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <dirent.h>
#include <libgen.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

int main(int ac, char **av, char **env);
char *_strtok(char *str, const char *delim);
char **_strtokenize(char *str);
void prompt(void);
char *_strchr(const char *str, int c);
int _strncmp(char *str1, char *str2, size_t n);
int _strlen(char *str);
int _strcmp(char *str1, char *str2);
char *_strdup(char *str);
void exec(char *cp, char **command);
void check_sig(int n);
int check(char **command, char *buf);
char *check_path(char **path, char *command);
char *add_path(char *path, char *command);
int built_in(char **command, char *line);
void my_exit(char **command, char *line);
void _env(void);
char *get_path(void);
void _free(char **buf);
ssize_t _getline(char **str, size_t *n, FILE *stream);
char *_memcpy(char *dest, char *src, unsigned int n);

struct _builtin
{
	char *env;
	char *exit;
} builtin;

struct data
{
	int tot_exit;
	int line_count;
} data;

struct flag
{
	bool is_interactive;
} flag;


#endif
