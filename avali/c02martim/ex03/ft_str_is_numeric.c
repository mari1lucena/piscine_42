/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 03:55:45 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:24:43 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	position;

	position = 0;
	if (str[position] == '\0')
	{
		return (1);
	}
	while (str[position] != '\0')
	{
		if (str[position] >= '0' && str[position] <= '9')
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
	str = "1m23";

	printf("string: %s\n", str);
	printf("return: %d\n", ft_str_is_numeric(str));

	return (0);
}