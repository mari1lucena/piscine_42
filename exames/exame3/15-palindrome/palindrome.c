/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:41:05 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/13 19:15:43 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}
int	main(int ac, char **av)
{
	int	i = 0;
	int	len = 0;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		while (i < len / 2)
		{
			if (av[1][i] != av[1][len -1 -i])
			{
				write(1, "\n", 1);
				return (0);
			}
			i++;
		}
		if( i == len / 2)
			write(1, av[1], len);
	}
	write(1, "\n", 1);
}