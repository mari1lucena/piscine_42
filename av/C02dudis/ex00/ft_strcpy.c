/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:01:57 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:23:20 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char *src = "ola";
	char dest[3]; 
	printf("\nsource: %s\ndestination: %s\n", src, dest);
	ft_strcpy(dest, src);
	printf("\nsource: %s\ndestination: %s\n", src, dest);
	return (0);
}
