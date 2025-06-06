/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorpinel <gorpinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:25:52 by gorpinel          #+#    #+#             */
/*   Updated: 2025/02/01 18:51:37 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_reverse_alphabet(void)
{
	char	g;

	g = 'z' ;
	while (g >= 'a')
	{
		write (1, &g, 1);
		g--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
