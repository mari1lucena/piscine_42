/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroque-d <mroque-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 21:14:23 by mroque-d          #+#    #+#             */
/*   Updated: 2025/02/12 00:40:29 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	copy = (char *)malloc((i + 1) * sizeof(char));
	if (!copy)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}

 int	main(void)
 {
 	char src[] = "word";

 	printf("%s\n", ft_strdup(src));

 	return (0);
 }
