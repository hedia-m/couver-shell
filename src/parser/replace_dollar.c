/*
** replace_dollar.c for replace_dollar in /home/riamon_v/rendu/PSU/couver-shell/src/parser
** 
** Made by vincent riamon
** Login   <riamon_v@epitech.net>
** 
** Started on  Sat May 28 19:06:18 2016 vincent riamon
** Last update Sat May 28 19:07:56 2016 vincent riamon
*/

#include "shell.h"

char		*error_history(char *var, int mode)
{
  if (mode == 0)
    fprintf(stderr, "%s: Event not found.\n", var);
  else
    fprintf(stderr, "Bad ! arg selector.\n");
  return (NULL);
}

void		replace_var_env(char ***cmd, t_shell *sh)
{
  int		i;
  int		j;
  char		*tmp;

  i = -1;
  while ((*cmd)[++i])
    {
      j = -1;
      while ((*cmd)[i][++j])
	{
	  if ((*cmd)[i][j] == '$')
	    {
	      if ((tmp = get_var_env(sh->env, (*cmd)[i] + j + 1)) == NULL)
		{
		  fprintf(stderr, "%s: Undefined variable.\n", (*cmd)[i] + j + 1);
		  return ;
		}
	      free((*cmd)[i]);
	      (*cmd)[i] = strdup(tmp + 1);
	      return ;
	    }
	}
    }
}
