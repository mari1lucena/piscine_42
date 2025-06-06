/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 00:38:13 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/12 00:45:39 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length_1;
	int	*array;
	int	i;

	length_1 = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(length_1 * sizeof(int));
	if (!array)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (length_1);
}

int	main(void)
{
	int	min = 3;
	int max = 9;
	int *range;
	int	result;
	int	length;
	int i;

	result = ft_ultimate_range(&range, min, max);
	length = max - min;

	i = 0;
	while (i < length)
	{
		printf("%d, ", range[i]);
		i++;
	}
	printf("\n");
	return (0);
}