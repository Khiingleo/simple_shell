#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <signal.h>
#include <dirent.h>
#include <stddef.h>
#include <libgen.h>

extern char **environ;
int _strncmp(const char *str1, const char *str2, size_t n);
int _strlen(const char *str);
char *_strdup(char *str);
int _strcmp(char *str1, char *str2);
int _atoi(char *str);
char *_strcat(char *dest, char *src);
int _putchar(char c);
void _puts(char *s);
void *_realloc(void *ptr, unsigned int o_s, unsigned int n_s);
int input_num(char *str);
int delim_num(char *s, char *delim);
void _env(void);
void my_exit(char **token, char *line);
char *handle_nl(char *s);
char *_strchr(const char *str, int c);
void handle_sig(int signal);
void _help(void);
int execmd_builtin(char **token, char *line);
void free_env(char *env);
void free_tok(char **token);
int execmd(char *command, char **f);
char *_getenv(const char *n);
char **_strtokenize(char *str, char *delim, int n);
char *locate(char *command);
char *_strtok(char *str, const char *delim);
char *add_path(char *path, char *prog);


#endif
