/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:29:40 by hgutterr          #+#    #+#             */
/*   Updated: 2025/02/01 21:14:05 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	original_nb;

	original_nb = nb;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 1)
	{
		nb *= original_nb;
		power--;
	}
	return (nb);
}

int	main()
{
	int	nb;
	int	power;

	nb = 2;
	power = 7;
	printf("%d power by %d = %d", nb, power, ft_iterative_power(nb, power));
}

