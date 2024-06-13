
#include "minishell.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	size;
	int		i;
	int		j;

	size = ft_strlen(s);
	i = 0;
	j = 0;
	res = (char *)malloc((size + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		res[j++] = s[i++];
	}
	res[j] = '\0';
	return (res);
}
