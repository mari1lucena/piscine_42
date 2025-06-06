/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricolive <ricolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:34:38 by ricolive          #+#    #+#             */
/*   Updated: 2025/01/28 04:01:52 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	g;

	g = 'a';
	while (g <= 'z')
	{
		write(1, &g, 1);
		++g;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
