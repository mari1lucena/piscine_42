/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:56:30 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:27:04 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	*test1 = "Hello";
	char	*test2 = "Hello42";
	char	*test3 = "";
	char	*test4 = "HEeELLOo";
	char	*test5 = "hi";
	char	*test6 = "hi!!!";

	printf("Test 1 (\"%s\"): %d\n", test1, ft_str_is_alpha(test1));
	printf("Test 2 (\"%s\"): %d\n", test2, ft_str_is_alpha(test2));
	printf("Test 3 (\"%s\"): %d\n", test3, ft_str_is_alpha(test3));
	printf("Test 4 (\"%s\"): %d\n", test4, ft_str_is_alpha(test4));
	printf("Test 5 (\"%s\"): %d\n", test5, ft_str_is_alpha(test5));
	printf("Test 6 (\"%s\"): %d\n", test6, ft_str_is_alpha(test6));
	
	return (0);
}