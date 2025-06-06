/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:20:14 by hgutterr          #+#    #+#             */
/*   Updated: 2025/02/01 21:09:03 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (i > 1)
	{
		i *= ft_recursive_factorial(i - 1);
	}
	return (i);
}

int	main()
{
	int	nb;

	nb = 9;
	printf("%d! = %d\n", nb ,ft_recursive_factorial(nb));
}

