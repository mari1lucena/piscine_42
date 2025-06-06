/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:42:02 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/09 23:51:00 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (result);
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb = nb - 1;
	}
	return (result);
}

#include <stdio.h>

int main (void)
{
	int a = -5;
	printf("%d", ft_iterative_factorial(a));
	return(0);
}