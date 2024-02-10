#ifndef SHELL_H
#define SHELL_H

/*LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>

/*PROTOTYPES*/
int _strcmp(char *p1, char *p2);
char *_strcpy(char *dest, char *src);
char *search_path_func(char *command);
char **_split(char *str, char *sep);
char *_strcat(char *dest, char *src);
int _strlen(char *strl);
char *_getenv(char *env_var);
void *_calloc(unsigned int narr, unsigned int size);
void _env(void);
int execute(char **args);
int mt_line(char *buff);

/* GLOBAL VAR*/
extern char **environ;

#endif
