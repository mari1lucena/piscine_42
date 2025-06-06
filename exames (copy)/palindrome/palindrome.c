/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   palindrome.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:53:11 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/09 20:12:46 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
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
		if ( i == len / 2)
			write(1, av[1], len);
	
	}
	write(1, "\n", 1);
}