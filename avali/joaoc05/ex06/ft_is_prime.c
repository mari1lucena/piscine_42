/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:12:26 by jomaia            #+#    #+#             */
/*   Updated: 2025/02/01 19:39:44 by mlucena-         ###   ########.fr       */
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
#include <stdio.h>
int main()
{
	printf("%d", ft_is_prime(10));
}
