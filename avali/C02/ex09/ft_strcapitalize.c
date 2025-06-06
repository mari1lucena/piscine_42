/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 02:29:47 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:37:55 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
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
		if (!(((str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				|| (str[i - 1] <= '9' && str[i - 1] >= '0')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				i++;
			}
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "salut, comment tu vas? 42mots quarante-deux";
	char	str2[] = "HELLO 42! 123TEST, cOdInG iS FUN.";
	char	str3[] = "42 SCHOOL!! testing+symbols*like=this!";
	char	str4[] = "/ /";

	printf("Before: %s\n", str1);
	printf("After: %s\n", ft_strcapitalize(str1));
	printf("Before: %s\n", str2);
	printf("After: %s\n", ft_strcapitalize(str2));
	printf("Before: %s\n", str3);
	printf("After: %s\n", ft_strcapitalize(str3));
	printf("Before: %s\n", str4);
	printf("After: %s\n", ft_strcapitalize(str4));
	return (0);
}
