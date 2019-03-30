#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if (argc != 1)
		write(1, "z\n", 2);
	else
	{
		while (argv[argc-1][i]!='\0')
		{
			if (argv[argc-1][i] == 'z')
			{
				write(1, "z", 1);
				break ;
			}
			i += 1;
		}
		write(1, "\n", 1);
	}
	return (0);
}

