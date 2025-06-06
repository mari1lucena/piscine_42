/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:05:53 by marada            #+#    #+#             */
/*   Updated: 2025/01/24 22:21:09 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	while (size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		size--;
	}
}

int	main(void)
{
	int a[] = {2,3,1};
	printf("%i  %i  %i\n", a[0],a[1],a[2]);
	ft_sort_int_tab(a, 3);
	printf("%i  %i  %i\n", a[0],a[1],a[2]);
	return 0;
}
