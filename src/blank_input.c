
#include "../lib/minishell.h"

int	ft_is_space(int c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_blank_input(char *str)
{
	while (*str)
	{
		if (!ft_is_space(*str))
			return (0);
		str++;
	}
	return (1);
}
