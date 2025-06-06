/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:18:38 by jomaia            #+#    #+#             */
/*   Updated: 2025/02/01 19:39:56 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	temp;

	temp = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (temp < nb)
	{
		if (nb % temp == 0)
			return (0);
		temp++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_find_next_prime(2));
}
