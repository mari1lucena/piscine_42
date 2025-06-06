/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:46:54 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:26:07 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
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
	char *src = "olajnvjh";
	char dest[20]; 
	printf("\nsource: %s\ndestination: %s\n", src, dest);
	ft_strncpy(dest, src, 5);
	printf("\nsource: %s\ndestination: %s\n", src, dest);
	return (0);
}
