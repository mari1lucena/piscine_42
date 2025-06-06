/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 23:06:45 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/11 23:12:47 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i = 0;
	
	while(str[i])
		i++;
	return (i);
}
char	*ft_strdup(char *str)
{
	int	i = 0;
	char	*dupli;
	int	len;

	len = ft_strlen(str);
	dupli = (char *)malloc((len + 1) * sizeof(char));
	while (str[i] != '\0')
	{
		dupli[i] = str[i];
		i++;
	}
	dupli[i] = '\0';
	return (dupli);
}
#include <stdio.h>
int	main ()
{
	printf("%s", ft_strdup("Mariana"));
}