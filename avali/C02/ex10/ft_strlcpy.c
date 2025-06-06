/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 03:14:06 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:39:07 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main(void)
{
	unsigned int	len;
	char	src[] = "Hello,";
	char	dest[14];

	len = ft_strlcpy(dest, src, sizeof(dest));
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dest);
	printf("Length of source: %u\n", len);
	return (0);
}