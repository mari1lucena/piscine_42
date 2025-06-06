/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:17:59 by hfranco           #+#    #+#             */
/*   Updated: 2025/02/08 22:25:59 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb >= 1)
	{
		while (nb != 1)
		{
			result *= nb;
			nb--;
		}
	}
	else
		return (0);
	return (result);
}

int main()
{
	int oi;
	
	oi = ft_iterative_factorial(2);
	printf("%i", oi);
	return (0);
}
