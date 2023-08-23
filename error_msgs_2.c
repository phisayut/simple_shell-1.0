#include "shell.h"

char *error_126(char **args);
char *error_127(char **args);

/**
 * error_126 - creates error msg for permission denied
 * @args: array of arguments passed
 * Return: error string
 */

char *error_126(char **args)
{
	char *error, *hst_str;
	int len;

	hst_str = _itoa(hist);
	if (!hst_str)
		return (NULL);

	len = _strlen(name) + _strlen(hst_str) +
		_strlen(args[0]) + 24;
	error = malloc(sizeof(char) * (len + 1));
	if (!error)
	{
		free(hst_str);
		return (NULL);
	}

	_strcpy(error, name);
	_strcpy(error, ": ");
	_strcat(error, hst_str);
	_strcat(error, ": ");
	_strcat(error, args[0]);
	_strcat(error, ": Permission denied/n");

	free(hst_str);
	return (error);
}

/**
 * error_127 - creates an error message for command nnot found failures
 * @args: array of arguments passed to the command
 * *Return: error string
 */

char *error_127(char **args)
{
	char *error, *hst_str;
	int len;

	hst_str = _itoa(hist);
	if (!hist_str)
		return (NULL);

	len = _strlen(name) + _strlen(hst_str) + _strlen(args[0]) + 16;
	error = malloc(sizeof(char) * (len + 1));
	if (!error)
	{
		free(hst_str);
		return (NULL);
	}

	_strcpy(error, name);
	_strcat(error, ": ");
	_strcat(error, hst_str);
	_strcat(error, ": ");
	_strcat(error, args[0]);
	_strcat(error, ": not found\n");

	free(hst_str);
	return (error);
}

