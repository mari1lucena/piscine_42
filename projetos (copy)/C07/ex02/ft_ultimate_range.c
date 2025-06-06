/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 02:28:39 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/13 20:40:33 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(i * sizeof(int));
	if (!(*range))
		return (-1);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = (min + i);
		i++;
	}
	return (i);
}

/*int	main()
{
	int	s;
	int	i;

	int *arr = NULL;

	i = 0;
	s = ft_ultimate_range(&arr, 7, 9);
	while (i < 9 - 7)
	{
		printf("%i", arr[i]);
		i++;
	}
}*/