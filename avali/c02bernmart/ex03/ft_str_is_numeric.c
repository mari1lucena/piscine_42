/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:35:45 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/04 20:57:15 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	char	c;
	int		pos;

	pos = 0;
	if (str[pos] == '\0')
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		c = str[pos];
		if (!(c >= '0' && c <= '9'))
		{
			return (0);
		}
		pos++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	char str1[] = "1213535153";
	char str2[] = "1234w12134";
	char str3[] = "";
	int i = ft_str_is_numeric(str1);
	int j = ft_str_is_numeric(str2);
	int k = ft_str_is_numeric(str3);
	printf("this one is so it is %d, this one is not so is %d. empty is also %d", i, j, k);
} 
