/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:11:02 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/04 20:59:48 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	pos;

	pos = 0;
	if (str[pos] == '\0')
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		if (!((str[pos] >= 32) && (str[pos] <= 126)))
		{
			return (0);
		}
		pos ++;
	}
	return (1);
}

#include <stdio.h>

int main()
{
	char str1[] = "Hello World";
	char str2[] = "Hello\007World";
	char str3[] = "";
	int i = ft_str_is_printable(str1);
	int j = ft_str_is_printable(str2);
	int k = ft_str_is_printable(str3);
	printf("this one is so it is %d, this one is not so is %d. empty is also %d", i, j, k);
}