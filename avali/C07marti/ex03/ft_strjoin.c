/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:19:54 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/12 00:46:49 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_countstrs(int size, char **arr, char *sep)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length = length + ft_strlen(arr[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		length = length + ft_strlen(sep);
		i++;
	}
	return (length);
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
	char	*result;
	int		total_len;
	int		i;

	if (size == 0)
	{
		result = (char *)malloc(sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total_len = ft_countstrs(size, strs, sep);
	result = (char *)malloc((total_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = -1;
	result[0] = '\0';
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}

int	main(void)
{
	int		size;
	char	*sep;
	char	**strs;
	int		i;
	char	*new;

	size = 3;
	sep = ", ";
	strs = (char *[]){"word1", "word2", "word3"};
	i = 0;
	new = ft_strjoin(size, strs, sep);
	printf("%s\n", new);
	free(new);
	return (0);
}
