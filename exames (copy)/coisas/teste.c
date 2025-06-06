/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 22:14:55 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/06 17:06:29 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_alpha(char *str, char *str1, char *str2)
{
	int	i;
	int	x;
	int	c;
	int	y;
	
	i = 0;
	x = 0;
	c = 0;
	while( str[i] != '\0')
	{	
		while (str[i] == str1[x] || str[i] == str2[x])
		{
			y = x + 1;
			while( y > 0) 
			{
				write(1, &str[c], 1);
				y--;
			}
			c++;
			i++;
			y = 0;
			x = 0;
		}
		x++;
	}
}

int	main()
{
	char	str1[] = "abcdefghijklmnopqrstuvwxyz";
	char	str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	str[] = "flamengo";

	ft_alpha(str, str1, str2);
}
