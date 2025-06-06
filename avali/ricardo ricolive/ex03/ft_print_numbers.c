/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricolive <ricolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:26:04 by ricolive          #+#    #+#             */
/*   Updated: 2025/01/27 23:21:56 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	g;

	g = '0';
	while (g <= '9')
	{
		write(1, &g, 1);
		++g;
	}
}

int	main(void)
{
	ft_print_numbers();
}
