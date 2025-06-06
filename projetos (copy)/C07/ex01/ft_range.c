/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:26:43 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/13 20:39:37 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dupli;

	i = max - min;
	if (min >= max)
		return (NULL);
	dupli = (int *) malloc(i * sizeof(int));
	i = 0;
	while (min + i < max)
	{
		dupli[i] = (min + i);
		i++;
	}
	return (dupli);
}

/*#include <stdio.h>
int	main()
{
	int	*s;
	int	i;

	i = 0;
	s = ft_range(7, 9);
	while (i < 9 - 7)
	{
		printf("%i", s[i]);
		i++;
	}
}*/