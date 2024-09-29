/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybilgui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:00:40 by ybilgui           #+#    #+#             */
/*   Updated: 2024/09/07 16:57:58 by ybilgui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if(s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if(i < n)
	{
	return (s1[i] - s2[i]);
	}
	return 0;
}
