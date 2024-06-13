
#include "minishell.h"

int	ft_strlen(const char *str)
{
	int	res;

	if (str == NULL)
		return (0);
	res = 0;
	while (*str)
	{
		res++;
		str++;
	}
	return (res);
}
