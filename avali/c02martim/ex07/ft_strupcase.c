/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:44:59 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 21:28:52 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != 0)
	{
		if (str[position] >= 'a' && str[position] <= 'z')
		{
			str[position] = str[position] - 32;
		}
		position++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "word";

	printf("original string: %s\n", str);
	printf("modified string: %s\n", ft_strupcase(str));

	return (0);
}