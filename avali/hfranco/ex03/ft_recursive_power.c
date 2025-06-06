/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:04:44 by hfranco           #+#    #+#             */
/*   Updated: 2025/02/08 22:32:47 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (result = nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	int	result;
	int	nb = 3;
	int	power = 4;

	result = ft_recursive_power(nb, power);
	printf("%i\n", result);
	return (0);
}
