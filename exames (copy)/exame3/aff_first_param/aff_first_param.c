/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 20:03:47 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/06 20:43:27 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char *str)
{
	while (*str != '\0')
	{
		write(1, &str[0], 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac < 2)
		write(1, "\n", 1);
	if (ac >= 2)
		putchar(av[1]);
}