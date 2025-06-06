/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:57:29 by bernmart@st       #+#    #+#             */
/*   Updated: 2025/02/04 21:04:51 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

int	ft_char_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	pos;

	pos = 0;
	if (ft_char_is_lowercase(str[pos]) == 1)
	{
		str[pos] -= 32;
	}
	while (str[pos] != '\0')
	{
		if (ft_char_is_alpha(str[pos]) == 0)
		{
			if (ft_char_is_lowercase(str[pos + 1]) == 1)
			{
				str[pos + 1] -= 32;
			}
		}
		else
		{
			if (ft_char_is_uppercase(str[pos + 1]) == 1)
			{
				str[pos + 1] += 32;
			}
		}
		pos++;
	}
	return (str);
}

#include <stdio.h>
int main()
{
	char str[] = "ola, tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um";
	ft_strcapitalize(str);
	printf("%s", str);
}