#include "../lib/minishell.h"

char	**ft_alloc_envp(char **envp)
{
	char	**temp_envp;
	int	i;

	i = 0;
	while (envp[i++]);
	temp_envp = (char **)malloc(i * sizeof(char *));
	if (!temp_envp)
		exit (1);
	i = 0;
	while (envp[i])
	{
		temp_envp[i] = ft_strdup(envp[i]);
		if (!temp_envp[i])
			exit (1);
		i++;
	}
	temp_envp[i] = NULL;
	return (temp_envp);
}

int	main(int argc, char **argv, char **envp)
{
	t_dyn_array	env_glbl_vars;

	if (argc != 1 || !argv)
		printf("Erro! Consertar esse printf!");
	env_glbl_vars = (t_dyn_array){0};
	env_glbl_vars.array = ft_alloc_envp(envp);
	minishell(&env_glbl_varsv);
	return (0);
}
