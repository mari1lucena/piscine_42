/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:22:27 by jomaia            #+#    #+#             */
/*   Updated: 2025/02/01 19:39:50 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	temp;

	temp = 1;
	while (ft_recursive_power(temp, 2) < nb)
	{
		temp++;
	}
	if (ft_recursive_power(temp, 2) == nb)
		return (temp);
	else
		return (0);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_sqrt(4));
}
