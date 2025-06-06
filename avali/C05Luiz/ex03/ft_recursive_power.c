/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:04:46 by lbarros           #+#    #+#             */
/*   Updated: 2025/02/09 23:54:18 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = result * ft_recursive_power(result, power -1);
	return (result);
}

#include <stdio.h>
int main (void)
{
	int a = 0;
	int p = 0;

	printf("%d", ft_recursive_power(a, p));
}