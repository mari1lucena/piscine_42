/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:39:27 by mlucena-          #+#    #+#             */
/*   Updated: 2025/01/22 17:50:46 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	m;

	m = 'z';
	while (m >= 'a')
	{
		write(1, &m, 1);
		m--;
	}
}

/*int     main()
{
	ft_print_reverse_alphabet();
}*/