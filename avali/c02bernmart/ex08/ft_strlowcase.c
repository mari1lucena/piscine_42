/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:51:59 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/04 21:01:20 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	pos;

	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] >= 'A' && str[pos] <= 'Z')
		{
			str[pos] += 32;
		}
		pos++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "hEL1LO wORLD1";
	printf("Before the Magic: %s\n", str);
	ft_strlowcase(str);
	printf("TADA: %s", str);
}