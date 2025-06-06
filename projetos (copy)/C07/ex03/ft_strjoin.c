/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 05:05:24 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/13 21:04:49 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_tam(int size, char **strs, char *sep)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = j + ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		j = j + ft_strlen(sep);
		i++;
	}
	return (j);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		tam;
	char	*str;

	i = 0;
	tam = ft_tam(size, strs, sep);
	if (size == 0)
	{
		str = (char *)malloc(sizeof(char) * 1);
		str[i] = '\0';
		return (str);
	}
	str = (char *)malloc(sizeof(char) * tam + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main()
{
	char	*strs[] = {"oiii", "querido", "avaliador@"};
	printf("%s\n", ft_strjoin(3, strs, ", "));
}*/