/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:40:53 by mmarceli          #+#    #+#             */
/*   Updated: 2025/01/25 20:25:12 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c;

	c = 'N';
	if (n < 0)
	{
		write(1, &c, 1);
	}
	else
	{
		c = 'P';
		write(1, &c, 1);
	}
}

int	main(void)
{
	ft_is_negative(-2);
}
