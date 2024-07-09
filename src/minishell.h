#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <readline/readline.h>
# include <readline/history.h>

typedef struct	s_dyn_array
{
	int	len;
	char	**array;
}	t_dyn_array;

char	*ft_strdup(const char *s);
int	ft_strlen(const char *str);
int	ft_blank_input(char *str);

#endif
