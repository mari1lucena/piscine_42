/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:49:03 by fralvare          #+#    #+#             */
/*   Updated: 2025/02/07 12:10:45 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (dest_len + i < size - 1 && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char			dest[20] = "Hello";
	char			src[] = " World test exame";
	unsigned int	size = 20;
	char			dest2[20] = "Hello";

	printf("Before: %s\n", dest);
	unsigned int	result = ft_strlcat(dest, src, size);
	printf("After: %s\n", dest);
	printf("Resulting length: %u\n", result);
	unsigned int	result2 = ft_strlcat(dest2, src, 0);
	printf("Edge case size=0: Resulting length: %u\n", result2);
	return (0);
}
