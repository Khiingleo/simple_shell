#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <dirent.h>
#include <libgen.h>
#include <stddef.h>

int main(int ac, char **av, char **env);
int is_exit(char *command);
void execmd(char **av, char **argv, char **env);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
int _strcmp(char *str1, char *str2);
char **get_args(char *line, int *ac, ssize_t nread);
void free_argv(char **argv);
char *_strcat(char *dest, char *src);
int _strlen(char *str);
char *find_command(char *command, char *path);
char *get_path(char **env);
int _strncmp(char *str1, char *str2, size_t n);
void print_env(char **env);
void handle_exit(char **argv);
int _atoi(char *str);
char *_strtok(char *str, const char *delim);
char *_strchr(const char *str, int c);
ssize_t _getline(char **str, size_t *n, FILE *stream);
char *_memcpy(char *dest, char *src, unsigned int n);

#endif
