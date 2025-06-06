/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 02:17:28 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:23:46 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	position;

	position = 0;
	if (str[position] == '\0')
	{
		return (1);
	}
	while (str[position] != '\0')
	{
		if ((str[position] >= 'A' && str[position] <= 'Z')
			|| (str[position] >= 'a' && str[position] <= 'z'))
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
	str = "wo666d";

	printf("string: %s\n", str);
	printf("return: %d\n", ft_str_is_alpha(str));

	return (0);
}