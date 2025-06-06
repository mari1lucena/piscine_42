/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:15:59 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/02 01:17:06 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	y;
	unsigned int	sdest;
	unsigned int	ssrc;

	a = 0;
	y = 0;
	i = 0;
	while (dest[a] != '\0')
		a++;
	sdest = a;
	while (src[y] != '\0')
		y++;
	ssrc = y;
	if (size == 0 || size <= sdest)
		return (ssrc + size);
	while (src[i] != '\0' && (i < size - sdest -1))
	{
		dest[a] = src[i];
		i++;
		a++;
	}
	dest[a] = '\0';
	return (sdest + ssrc);
}

/*#include <stdio.h>
int main (void)
{
	char src[] = "Born to code";
	char dest [] = "1337 42";
	
	printf("%i \n", ft_strlcat(dest, src, 20));
	printf("%s \n", dest);
}*/
