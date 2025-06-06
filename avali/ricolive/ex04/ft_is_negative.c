/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricolive <ricolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:09:50 by ricolive          #+#    #+#             */
/*   Updated: 2025/01/28 04:03:18 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	pos = 'P';
	neg = 'N';
	if (n < 0)
		write(1, &neg, 1);
	else
		write(1, &pos, 1);
}

int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(5);
	return (0);
}
