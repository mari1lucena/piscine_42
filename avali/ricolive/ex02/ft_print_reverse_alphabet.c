/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricolive <ricolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:05:22 by ricolive          #+#    #+#             */
/*   Updated: 2025/01/28 04:02:28 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	g;

	g = 'z';
	while (g >= 'a')
	{
		write(1, &g, 1);
		--g;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
}
