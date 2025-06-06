/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:09:40 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/08 21:11:32 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while ((nb / 2) >= i)
	{
		if (nb % i == 0)
			nb++;
		i++;
	}
	return (nb);
}

#include <stdio.h>
int	main()
{
	printf("%d", ft_find_next_prime(19685131));
}