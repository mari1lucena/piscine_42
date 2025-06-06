/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 23:18:32 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/12 16:00:38 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int		i;
	int		seen[128];

	if (argc == 3)
	{
		i = 0;
		while (i < 128)
			seen[i++] = 0;
		i = 0;
		while (argv[1][i])
		{
			seen[argv[1][i]] += 1;
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if(seen[argv[2][i]] == 1)
				seen[argv[2][i]] = 2;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (seen[argv[1][i]] == 2)
			{
				write(1, &argv[1][i], 1);
				seen[argv[1][i]] = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}