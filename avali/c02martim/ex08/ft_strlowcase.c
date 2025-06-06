/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 00:25:27 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:30:13 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'A' && str[position] <= 'Z')
		{
			str[position] = str[position] + 32;
		}
		position++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "WORD";

	printf("original string: %s\n", str);
	printf("modified string: %s\n", ft_strlowcase(str));

	return (0);
}