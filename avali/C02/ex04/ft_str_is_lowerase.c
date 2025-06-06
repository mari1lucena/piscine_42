/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowerase.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:13:39 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:28:29 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	*test1 = "HELLO";
	char	*test2 = "HeLlo";
	char	*test3 = "";
	char	*test4 = "hi!1!";
	char	*test5 = "hi";

	printf("Test 1 (\"%s\"): %d\n", test1, ft_str_is_lowercase(test1));
	printf("Test 2 (\"%s\"): %d\n", test2, ft_str_is_lowercase(test2));
	printf("Test 3 (\"%s\"): %d\n", test3, ft_str_is_lowercase(test3));
	printf("Test 4 (\"%s\"): %d\n", test4, ft_str_is_lowercase(test4));
	printf("Test 5 (\"%s\"): %d\n", test5, ft_str_is_lowercase(test5));
	return (0);
}