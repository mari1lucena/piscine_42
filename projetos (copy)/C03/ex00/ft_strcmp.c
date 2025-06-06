/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 21:12:39 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/02 03:56:14 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*verificar se duas strings sao iguais ou qual delas 'e menor ou maior*/
/*0 sao iguais, x<0 str1 'e menor que str2, x>0 str1 maior qe str2*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	x;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' )
	{
		i++;
	}
	if (s1[i] == s2[i])
		return (0);
	else
	{
		x = s1[i] - s2[i];
		return (x);
	}
}

/*#include <stdio.h>
int main()
{	
	char s1[] = "ola";
	char s2[] = "ola";
	
	printf("%d", ft_strcmp(s1, s2));
}*/
