/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroque-d <mroque-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 00:50:44 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/03 20:31:40 by mroque-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'A' && str[position] <= 'Z')
		{
			str[position] = str[position] + 32;
		}
		if (position == 0 || (!(str[position - 1] >= 'a'
					&& str[position - 1] <= 'z')
				&& !(str[position - 1] >= 'A' && str[position - 1] <= 'Z')
				&& !(str[position - 1] >= '0' && str[position - 1] <= '9')))
		{
			if (str[position] >= 'a' && str[position] <= 'z')
			{
				str[position] = str[position] - 32;
			}
		}
		position++;
	}
	return (str);
}

int	main(void)
{
	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("original string: %s\n", str);
	printf("modified string: %s\n", ft_strcapitalize(str));

	return (0);
}