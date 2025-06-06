/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 16:02:39 by fralvare          #+#    #+#             */
/*   Updated: 2025/02/07 12:08:04 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1]  == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*str = "needle in a haystack";
	char	*to_find = "haystack";
	char	*result;

	result = ft_strstr(str, to_find);
	printf("%s\n", result);
}
