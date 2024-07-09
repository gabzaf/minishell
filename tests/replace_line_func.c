#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int	main()
{
	char	*input;
	int	nbr;
	
	while (1)
	{
		input = readline("Enter a positive number: ");
		nbr = atoi(input);
		if (nbr < 0)
		{
			rl_replace_line("This is not a positive number!", 0);
			rl_redisplay();
			printf("%s\n", rl_line_buffer);
			free(input);
		}
		else
			break ;
	}
	return (0);
}
