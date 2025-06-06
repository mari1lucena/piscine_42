/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fralvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:31:44 by fralvare          #+#    #+#             */
/*   Updated: 2025/02/07 11:57:35 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int	main(void)
{
	printf("Test 1: %d\n", ft_strcmp("Hello", "Hello"));
	printf("Test 2: %d\n", ft_strcmp("Hello", "Hola"));
	printf("Test 3: %d\n", ft_strcmp("abd", "abc"));
	printf("Test 4: %d\n", ft_strcmp("abc", "abd"));
	printf("Test 5: %d\n", ft_strcmp("Hello", "Hellothere"));
	printf("Test 6: %d\n", ft_strcmp("", "Francisco"));
	printf("Test 7: %d\n", ft_strcmp("Francisco", ""));
	return (0);
}

