/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 20:18:30 by hmendes           #+#    #+#             */
/*   Updated: 2025/02/04 23:22:54 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)
{

char *str1 = "Hellooooo";
char *str2 = "Hellooooo";
printf("Comparing \"%s\" and \"%s\": %d\n", str1, str2, ft_strcmp(str1, str2));
return (0);
}
