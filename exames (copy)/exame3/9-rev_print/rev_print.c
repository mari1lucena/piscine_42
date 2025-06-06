/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 20:53:33 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/11 21:48:52 by mlucena-         ###   ########.fr       */
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
	int	tam;

	if(ac == 2)
	{
		tam = ft_strlen(av[1]);
		while (tam >= 0)
		{
			write(1, &av[1][tam], 1);
			tam--;
		}
	}
	write(1, "\n", 1);
	return (0);
}