/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 03:46:01 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:36:36 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	position;
	unsigned int	length;

	position = 0;
	while (src[position] != '\0')
		position++;
	length = position;
	if (size == 0)
		return (length);
	position = 0;
	while (src[position] != '\0' && position < size - 1)
	{
		dest[position] = src[position];
		position++;
	}
	dest[position] = '\0';
	return (length);
}

int	main(void)
{	
	char dest[100];
	char src[] = "lisboa esta em portugal";

	unsigned int size;
	size = 10;

	unsigned int length;
	length = ft_strlcpy(dest, src, size);

	printf("src: %s\n", src);
	printf("length: %d\n", length);
	printf("dest: %s\n", dest);
	printf("size: %d\n", size);

	return (0);
}