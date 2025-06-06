/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 01:52:57 by mlucena-          #+#    #+#             */
/*   Updated: 2025/01/25 12:43:50 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int main()
{
	int a = 15;
	int b = 10;
	int x;
	int y;
	
	ft_div_mod(a, b, &x, &y);
	printf("%d\n", x);
	printf("%d", y);
}*/