/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:35:05 by marada            #+#    #+#             */
/*   Updated: 2025/01/24 22:15:17 by mlucena-         ###   ########.fr       */
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

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_swap(&tab[i], &tab[size - 1 - i]);
		i++;
	}
}

int	main(void)
{
	int a[] = {0,1,2};
	printf("%i  %i  %i\n", a[0],a[1],a[2]);
	ft_rev_int_tab(a, 3);
	printf("%i  %i  %i\n", a[0],a[1],a[2]);
	return 0;
}
