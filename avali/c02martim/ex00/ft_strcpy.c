/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:19:07 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:19:57 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
// int	size_calculator(char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	position;

	position = 0;
	while (src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}
	dest[position] = '\0';
	return (dest);
}

int	size_calculator(char *src)
{
	int position;

	position = 0;
	while (src[position] != '\0')
	{
		position++;
	}
	return (position);
}

int	main(void)
{	
	char *src;
	src = "lisboa esta em portugal";

	int size;
	size = size_calculator(src);

	char dest[size];

	ft_strcpy(dest, src);

	printf("%s\n", dest);
	printf("length: %d\n", size);

	return (0);
}