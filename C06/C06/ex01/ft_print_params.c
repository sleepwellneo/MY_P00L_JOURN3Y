/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilgui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 23:16:04 by ybilgui           #+#    #+#             */
/*   Updated: 2024/09/11 16:07:58 by ybilgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	arg;

	arg = 1;
	while (arg < argc)
	{
		index = 0;
		while (argv[arg][index])
		{
			write(1, &argv[arg][index], 1);
			index++;
		}
		write(1, "\n", 1);
		arg++;
	}
}
