/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:44:35 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/04 20:58:27 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	pos;

	pos = 0;
	if (str[pos] == '\0')
	{
		return (1);
	}
	while (str[pos] != '\0')
	{
		if (!(str[pos] >= 'a' && str[pos] <= 'z'))
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
	char str1[] = "abcdtsvmvn";
	char str2[] = "hsncAmbmkm";
	char str3[] = "";
	int i = ft_str_is_lowercase(str1);
	int j = ft_str_is_lowercase(str2);
	int k = ft_str_is_lowercase(str3);
	printf("this one is so it is %d, this one is not so is %d. empty is also %d", i, j, k);
}