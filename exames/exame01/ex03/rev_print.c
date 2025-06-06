/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:18:10 by mlucena-          #+#    #+#             */
/*   Updated: 2025/01/30 20:29:54 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_rev_print (char *str)
{
	int i;
	int y;
	char x;

	y = 0;
	i = 0;
	while ( str[i] != '\0')
	{
		i++;	
	}
	while( i != y)
	{
		x = str[y];
		str[y] = str[i - 1];
		str[i - 1] = x;
		y++;
		i--;
	}
	return(str);
}

int main()
{
	char first[] = "original";

	printf("%s", ft_rev_print(first));
}

