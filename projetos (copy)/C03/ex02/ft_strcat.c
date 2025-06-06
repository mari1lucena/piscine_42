/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 21:07:55 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/01 19:54:22 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ler a quantidade de variaveis de cada, colocar os x caracteres a partir da 
posicao m retornar a funcao nova*/
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	a;
	int	x;

	a = 0;
	i = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	x = a;
	while (src[i] != '\0')
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
	char dest[] = "avaliador";
	char src[]= " e linda";

	printf("%s", ft_strcat(dest, src));
}*/