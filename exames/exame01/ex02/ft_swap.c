/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:29:52 by mlucena-          #+#    #+#             */
/*   Updated: 2025/01/30 16:03:17 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int m1 = 1;
	int m2 = 3;
	
	ft_swap(&m1, &m2);
	printf("%d\n", m1);
	printf("%d", m2);
}
