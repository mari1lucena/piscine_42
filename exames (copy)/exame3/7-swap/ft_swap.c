/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 19:07:20 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/08 23:43:55 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int	main()
{
	int	s;
	int	x;
	
	s = 5;
	x = 6;
	ft_swap(&s, &x);
	printf("%i e %i \n", s, x);
}*/