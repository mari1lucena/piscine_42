/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:21:29 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/02 02:23:02 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*procura uma substring dentro de uma string se nao encontrar retorna nulo*/
/**/

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	i;

	i = 0;
	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + x] == to_find[x] && to_find[x] != '\0')
			x++;
		if (to_find[x] == '\0')
			return (str + i);
		i++;
		x = 0;
	}
	return (0);
}

/*int main(void)
{
	char str[] = "ola meu nome e mariana lins";
	char to_find[] = "mariana";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/