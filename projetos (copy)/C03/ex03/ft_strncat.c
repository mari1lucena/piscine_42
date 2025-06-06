/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:49:48 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/01 19:55:10 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;
	unsigned int	x;

	a = 0;
	i = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	x = a;
	while (src[i] != '\0' && i < nb)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char dest[] = "mari";
	char src[]= " e linda e feia";

	printf("%s", ft_strncat(dest, src, 8));
}*/
