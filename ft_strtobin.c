#include <unistd.h>
#include <stdlib.h>

void	write_bin(char c)
{
	int	i;
	char	bit;

	i = 7;
	while (i >= 0)
	{
		bit = ((c >> i) & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Syntax: ./a.out <string>\n", 25);
		exit (0);
	}
	while(*argv[1])
	{
		write_bin(*argv[1]);
		write(1, " ", 1);
		argv[1]++;
	}
	write(1, "\n", 1);
}
