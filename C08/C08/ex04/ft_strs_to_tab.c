/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yimghare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 13:32:03 by yimghare          #+#    #+#             */
/*   Updated: 2024/08/12 10:01:50 by yimghare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	length(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *str)
{
	char	*res;
	int		srclen;
	int		i;

	i = 0;
	srclen = length(str);
	res = (char *)malloc(srclen * sizeof(char) + 1);
	if (res == NULL)
		return (NULL);
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	i = 0;
	arr = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (arr == NULL)
		return (NULL);
	while (i < ac)
	{
		arr[i].size = length(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}
/*void print_stock_str_array(t_stock_str *arr, int ac)
{
    for (int i = 0; i < ac; i++)
    {
        printf("Size: %d\n", arr[i].size);
        printf("Original String: %s\n", arr[i].str);
        printf("Copied String: %s\n", arr[i].copy);
        printf("\n");
    }
}
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <string1> <string2> ...\n", argv[0]);
        return 1;
    }
    t_stock_str *stock_array = ft_strs_to_tab(argc - 1, argv+1);
    print_stock_str_array(stock_array, argc - 1);
    return 0;
}*/
