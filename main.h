#ifndef MAIN_H
#define MAIN_H

#define TRUE (1 == 1)

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <unistd.h>

/* path */
int _path(char *first, char **input, char **env, int *ex_st);


/* environment */
int printenv(char **env, int *ex_st);
char *cpy_env(char **env);


/* built-ins & execute function */
void builtins(char *line, char **args, char **env, int *ex_st);
void _execute(int status, char **args, int *ex_st, int *tal);


/* printf.c: functions related to printing strings/characters/numbers */
void print_str(char *s);
char *pathstr(char *right, char *first);
char **parser(char *l);
void print_int(int *tal);


/* helpers.c: helper functions */
void no_nl(char *l);
void free_grid(char **grid, int height);
int special_char(char *buffer, ssize_t bytes, int *ex_st);

#endif
