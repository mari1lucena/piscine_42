/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricolive <ricolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:15:27 by ricolive          #+#    #+#             */
/*   Updated: 2025/01/28 04:03:50 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				write (1, &f, 1);
				write (1, &s, 1);
				write (1, &t, 1);
				if (f != '7')
					write (1, ", ", 2);
				t++;
			}
			s++;
		}
		f++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
