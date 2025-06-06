/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 02:14:39 by mlucena-          #+#    #+#             */
/*   Updated: 2025/01/25 13:25:45 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = *a / *b;
	rest = *a % *b;
	*a = div;
	*b = rest;
}

/*#include <stdio.h>
int main()
{
	int a = 3;
	int b = 9;

	ft_ultimate_div_mod(&a, &b);
	printf("%d | %d", a, b);
}*/