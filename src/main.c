#include "minishell.h"

void	ft_init_terminal(t_terminal *terminal, char **env_params)
{
	terminal->env_vars = ft_init_env(env_params);
	terminal->env_path = ft_getenv(terminal->env_vars, "PATH");
}

int	main(int argc, char **argv, char **env_params)
{
	t_terminal	terminal;

	if (argc != 1 || !argv)
		printf("Erro! Consertar esse printf!");
	terminal = (t_terminal){0};
	ft_init_terminal(&terminal, env_params);
	while (1)
	{
		//signals();
		ft_get_inputs(&terminal);
	}
	return (0);
}
