/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:41:16 by hgutterr          #+#    #+#             */
/*   Updated: 2025/02/01 21:14:57 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (-1);
	return (nb);
}

int	main()
{
	int	nb;
	int	power;

	nb = 2;
	power = 7;
	printf("%d power by %d = %d\n", nb, power, ft_recursive_power(nb, power));
}

