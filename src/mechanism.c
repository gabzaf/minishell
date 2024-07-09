
#include "../lib/minishell.h"

t_dyn_array	*lexical_analyzer(t_dyn_array *env_glbl_vars, t_dyn_array *lexer)
{
	t_dyn_array	*r_token;
	int	i;
	char	c;

	i = 0;
	while (*get_current_char(lexer, i) && ft_is_space(get_current_char(lexer, i)))
		++lexer->input;
	while (*lexer->input)
	{
		c = *get_current_char(lexer, i);
		t = 
	}
	return (NULL);
}

t_dyn_array	tokenizer(t_dyn_array *env_glbl_vars, char *input)
{
	t_dyn_array	tokens;
	t_dyn_array	*token;
	t_dyn_array	lexer;

	token = (t_dyn_array){0};
	lexer.array = input;
	while (true)
	{
		token = lexical_analyzer(env_glbl_vars, &lexer);
		if (token)
			array_push(&token, token);
		else
			break ;	
	}
	return (do_something(&tokens));
}

void	input_handle(t_dyn_array *env_glbl_vars, char *input)
{
	t_dyn_array	tokens;

	tokens = tokenizer(env_glbl_vars, input);
}

void	minishell(t_dyn_array *env_glbl_vars)
{
	char	*input;

	while (1)
	{
		input = readline("\033[33mMinishell$\033[0m ");
		if (!input)
		{
			printf("exit\n");
			free(input);
			break ;
		}
		else if (ft_blank_input(input))
		{
			free(input);
			continue ;
		}
		add_history(input);
		if (input_handle(env_glbl_vars, input))
			break ;
	}
}
