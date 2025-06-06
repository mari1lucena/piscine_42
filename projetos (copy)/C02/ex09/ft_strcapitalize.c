/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 03:58:42 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/01 12:54:53 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] -32;
			i++;
		}
		if ((str[i] <= 47 || str[i] >= 58) && (str[i] <= 96 || str[i] >= 123))
			if (!(str[i] >= 65 && str[i] <= 90))
				if (str[i + 1] >= 97 && str[i +1] <= 122)
					str[i + 1] = str[i + 1] - 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char mar[] = "Ola, b-om di4, cO4O v0Ce esta?";
	
	printf("%s", ft_strcapitalize(mar));
}*/