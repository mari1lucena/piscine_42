/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:23:42 by jomaia            #+#    #+#             */
/*   Updated: 2025/02/01 19:20:51 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (0);
	while (nb != 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(4));
}
