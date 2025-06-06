/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorpinel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 12:40:31 by gorpinel          #+#    #+#             */
/*   Updated: 2025/02/01 18:50:57 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	g;

	g = 'a';
	while (g <= 'z')
	{
		write (1, &g, 1);
		g++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
