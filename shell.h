#ifndef SHELL_H
#define SHELL_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <time.h>
#include <stdbool.h>

/* env variables */
extern char **environ;
extern __sighandler_t signal(int __sig, __sighandler_t __handler);

/* handle builtins */
int checker(char **cmd, char *buff);
void propt_user(void);
void handle_signls(int s);
char **tokenizerrs(char *lines);
char *test_path(char **paths, char *cmd);
char *append_path(char *paths, char *cmd);
int handle_builtins(char **cmd, char *lines);
void exit_cmd(char **cmd, char *lines);

void print_environ(void);

/* str handlers */
int _strcmp(char *str1, char *str2);
int _strlen(char *str);
int _strncmp(char *str1, char *str2, int n);
char *_strdup(char *str);
char *_strchr(char *str, char c);

void execution(char *cp, char **cmd);
char *findPath(void);

/* helper function for efficient free */
void freeBuffers(char **buff);

struct builtins
{
	char *envir;
	char *ext;
} builtins;

struct inform
{
	int finalExit;
	int lnCount;
} inform;

struct fllgs
{
	bool inter;
} fllgs;

#endif /* SHELL_H */
