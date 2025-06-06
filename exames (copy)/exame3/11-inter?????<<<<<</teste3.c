/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 23:26:24 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/13 00:31:43 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	check[128];

	if (ac == 3)
	{
		i = 0;
		while (i < 128)
		{
			check[i] = 0;
			i++;
		}
		i = 0;
		while (av[1][i])
		{
			check[av[1][i]] += 1;
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (check[av[2][i]] == 1)
				check[av[2][i]] = 2;
			i++;
		}
		i = 0;
		while (av[1][i])
		{
			if (check[av[1][i]] == 2)
			{
				write(1, &av[1][i], 1);
				check[av[1][i]] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
