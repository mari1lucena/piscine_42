/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:14:13 by mlucena-          #+#    #+#             */
/*   Updated: 2025/01/22 17:30:39 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	m;

	m = 'a';
	while (m <= 'z')
	{
		write(1, &m, 1);
		m++;
	}
}

/*int     main()
{
        ft_print_alphabet();
}*/
