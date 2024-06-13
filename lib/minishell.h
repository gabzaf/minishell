#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef struct s_terminal
{
	char	*input;
	char	**split_input;
	t_env	*env_vars;
}	t_terminal;

typedef struct s_env
{
	char	*name;
	char	*value;
	struct t_env	*next;
}	t_env;

#endif
