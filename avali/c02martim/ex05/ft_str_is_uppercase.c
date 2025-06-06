/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 04:52:34 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:26:47 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	position;

	position = 0;
	if (str[position] == '\0')
	{
		return (1);
	}
	while (str[position] != '\0')
	{
		if (str[position] >= 'A' && str[position] <= 'Z')
		{
			position ++;
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
	str = "WORD";

	printf("string: %s\n", str);
	printf("return: %d\n", ft_str_is_uppercase(str));

	return(0);
}