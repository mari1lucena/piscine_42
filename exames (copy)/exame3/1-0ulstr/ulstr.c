/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 01:07:20 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/07 02:11:20 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if( ac != 2)
		write(1, "\n", 1);
	while(av[1][i])
	{
		if(av[1][i] >= 'a' && av[1][i] <= 'z')
		{	av[1][i] = av[1][i] - 32;
			write(1, &av[1][i], 1);
		}
		else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
		{
			av[1][i] = av[1][i] + 32;
			write(1, &av[1][i], 1);
		}
		else
		{
			av[1][i] = av[1][i];
			write(1, &av[1][i], 1);
		}
		i++;
	}
}