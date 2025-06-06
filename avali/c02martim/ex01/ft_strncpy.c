/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 22:39:33 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:20:18 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	position;

	position = 0;
	while (position < n && src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}
	while (position < n)
	{
		dest[position] = '\0';
		position++;
	}
	return (dest);
}

int	main(void)
{

	int n = 14;

	char *src;
	src = "lisboa esta em portugal ";

	char dest[100];

	ft_strncpy(dest, src, n);

	printf("%s\n ", dest);
	printf("n: %d\n", n);

	return (0);
}