#include <unistd.h>

int main(int ac, char **av)
{
	if(ac > 1)
	{
	int i;
	int j = ac - 1;
	while(j >= 1)
	{
		i = 0;
		while(av[j][i])
		{
			write(1, &av[j][i], 1);
			i++;
		}
		j--;
		write(1, "\n", 1);
	}
	}
}
