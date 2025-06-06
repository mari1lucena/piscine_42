/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroque-d <mroque-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:57:29 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/12 00:44:32 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	length_1;
	int	*array;
	int	i;

	length_1 = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc((length_1 + 1) * sizeof(int));
	if (!array)
	{
		return (0);
	}
	i = 0;
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

int	main(void)
{
 	int	min = 3;
 	int max = 9;
 	int	*result;
 	int	length;
 	int i;

 	result = ft_range(min, max);
 	length = max - min;

 	i = 0;
 	while (i < length)
 	{
 		printf("%d, ", result[i]);
 		i++;
 	}
 	printf("\n");
 	return (0);
}
