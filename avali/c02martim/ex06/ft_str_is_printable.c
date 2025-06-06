/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:10:41 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:28:30 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	position;

	position = 0;
	if (str[position] == '\0')
	{
		return (1);
	}
	while (str[position] != '\0')
	{
		if (str[position] >= 32 && str[position] <= 126)
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
	str = "m5";

	printf("string: %s\n", str);
	printf("return: %d\n", ft_str_is_printable(str));

	return (0);
}