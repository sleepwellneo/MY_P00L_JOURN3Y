#include <unistd.h>



int	ft_strlen(char *str){

	int count;

	count = 0;
	

	while (str[count])
	{

		count++;
	}
	return count;



}

int	main()
{

	ft_strlen("hamid");

	return 0;
}

