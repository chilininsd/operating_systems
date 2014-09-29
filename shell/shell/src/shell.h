#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <sys/wait.h>
#include <regex.h>
#include "ourhdr.h"
#include "CommandParser.h"
#include "DirectoryTraverser.h"
#include "JobManager.h"
#include <List.h>

#ifndef SHELL_H
#define	SHELL_H

#define MAX_PIPE_LENGTH 4096
#define FAIL "FAIL"

/**
 * Handles any commmands that the parent is required to take care of
 * @param - the line entered into the shell
 * @param - the tokenized command
 * @return - nonzero if the parent handled the command passed
 */
int handle_parent_commands(char*, char**);

#endif	/* SHELL_H */

#define VERSION_NUMBER "c564a50047a875c03d2894467eb267e0146581a1"
