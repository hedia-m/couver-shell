/*
** shell.h for  in /home/buffat_b/42sh_tmp/include
**
** Made by
** Login   <buffat_b@epitech.net>
**
** Started on  Fri May 13 21:44:59 2016
** Last update Tue May 24 11:03:09 2016 vincent riamon
*/

#ifndef SHELL_H_
# define SHELL_H_

/*
**	Libraries
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "prompt.h"
#include "../src/minishell1/my.h"

typedef struct		s_shell
{
  char			**env;
  char			**cmd;
  char			**alias;
  char			**history;
  t_prompt		*prompt;
}			t_shell;

#endif /* !SHELL_H_ */
