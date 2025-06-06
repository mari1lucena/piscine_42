/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:24:52 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/13 20:38:59 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dupli;

	i = 0;
	len = ft_strlen(src);
	dupli = (char *)malloc((len + 1) * sizeof(char));
	if (!src)
		return (NULL);
	while (src[i] != '\0')
	{
		dupli[i] = src[i];
		i++;
	}
	dupli[i] = '\0';
	return (dupli);
}

/*#include <stdio.h>
int	main()
{
	printf("%s", ft_strdup("olaaa"));
}*/