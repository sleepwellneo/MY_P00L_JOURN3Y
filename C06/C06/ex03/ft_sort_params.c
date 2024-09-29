#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
void	ft_swap(char **a, char **b)
{
	char *swap;
	
	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;
	while(s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
int main(int ac, char **av)
{
	int i;
	int j;
	
	i = 1;
	while(i < ac -1)
	{
		if(ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], &av[i + 1]);
			i = 0;
		}
		i++;
	}
	j = 1;
	while(j < ac)
	{
		ft_putstr(av[j]);
		write(1, "\n", 1);
		j++;
	}
	
}
