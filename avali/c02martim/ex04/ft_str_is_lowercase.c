/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 04:37:31 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:25:47 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	position;

	position = 0;
	if (str[position] == '\0')
	{
		return (1);
	}
	while (str[position] != '\0')
	{
		if (str[position] >= 'a' && str[position] <= 'z')
		{
			position++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	char *str;
	str = "ola";

	printf("string: %s\n", str);
	printf("return: %d\n", ft_str_is_lowercase(str));

	return (0);
}
