/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:33:38 by jomusoni          #+#    #+#             */
/*   Updated: 2025/02/04 21:25:56 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	retorno;

	i = 0;
	retorno = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && retorno == 1)
		{
			str[i] -= 32;
			retorno = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && retorno == 0)
			str[i] += 32;
		else if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
			retorno = 1;
		else
			retorno = 0;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Ola, tuDO bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s\n", str);
}
