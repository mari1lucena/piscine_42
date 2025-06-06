/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:57:44 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/12 19:07:33 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	len = 0;
	
	if (ac == 2)
	{
		while (av[1][len])
			len++;
		len -= 1;
		while (av[1][len] == ' ' || av[1][len] == '	')
			len--;
		while (len >= 0 && av[1][len] != ' ' && av[1][len] != '	')
			len--;
		len++;
		while(av[1][len] && av[1][len] != ' ' && av[1][len] != '	' )
		{
			write(1, &av[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
