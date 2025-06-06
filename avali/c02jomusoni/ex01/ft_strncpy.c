/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomusoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 17:26:15 by jomusoni          #+#    #+#             */
/*   Updated: 2025/02/02 17:26:19 by jomusoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Copiar e facil!, colar e dificil!";
	unsigned int	n = 15;
	char	dest[n + 1];

	dest[0] = '\0';
	printf("Antes da copia... \n");
	printf("sorce: %s \ndestino: %s \n", src, dest);
	ft_strncpy(dest, src, n);
	dest[n] = '\0';
	printf("depois da copia... \n");
	printf("sorce: %s \ndestino: %s \n", src, dest);
	return(0);
}*/
