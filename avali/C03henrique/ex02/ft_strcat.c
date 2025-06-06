/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 22:08:22 by hmendes           #+#    #+#             */
/*   Updated: 2025/02/04 23:27:01 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	l = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
    char desti[100] = "Hello, "; 
    char src[] = "World!";

    printf("Before strcat: %s\n", desti);
    ft_strcat(desti, src);
    printf("After strcat: %s\n", desti);
    
    return 0;
}
