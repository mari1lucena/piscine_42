/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 18:22:38 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/09 23:51:29 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)


{
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	result = nb * ft_recursive_factorial (nb -1);
	return (result);
}

#include <stdio.h>
int main (void)
{
	int a = -2;
	printf ("%d", ft_recursive_factorial(a));
}
