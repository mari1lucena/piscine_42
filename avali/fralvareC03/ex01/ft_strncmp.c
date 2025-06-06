/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fralvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 19:26:32 by fralvare          #+#    #+#             */
/*   Updated: 2025/02/07 11:59:23 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

 int	main(void)
 {
 	printf("Test 1: %d\n", ft_strncmp("Hello", "Hello", 5));
 	printf("Test 2: %d\n", ft_strncmp("Hell", "Hello", 5));
 	printf("Test 3: %d\n", ft_strncmp("abd", "abc", 2));
 	printf("Test 4: %d\n", ft_strncmp("abc", "abd", 3));
 	printf("Test 5: %d\n", ft_strncmp("Hello", "Hellothere", 5));
 	printf("Test 6: %d\n", ft_strncmp("", "Francisco", 5));
 	printf("Test 7: %d\n", ft_strncmp("Francisco", "", 5));
 	return (0);
}
