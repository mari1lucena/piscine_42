/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 14:51:27 by hgutterr          #+#    #+#             */
/*   Updated: 2025/02/01 21:07:22 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	original_nb;

	original_nb = nb;
	i = 1;
	if (nb < 0)
		return (0);
	while (i < original_nb)
	{
		nb *= i;
		i++;
	}
	return (nb);
}

int	main()
{
	int	nb;

	nb = 6;
	printf("%d! = %d\n", nb , ft_iterative_factorial(nb));
}

