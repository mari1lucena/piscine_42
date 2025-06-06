/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:38:00 by hmendes           #+#    #+#             */
/*   Updated: 2025/02/04 23:29:05 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char string[] = " Como estamos";
	char destino[] = "ola gente";
	
	printf("%s", ft_strncat(destino, string, 7));
	return (0);
}
