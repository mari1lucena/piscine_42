/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:21:03 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:32:46 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] < 32 || str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	*test1 = " ";
	char	*test2 = "Hii?!";
	char	*test3 = "~";
	char	*test4 = "\t\n";
	char	*test5 = "ç";

	printf("Test 1 (\"%s\"): %d\n", test1, ft_str_is_printable(test1));
	printf("Test 2 (\"%s\"): %d\n", test2, ft_str_is_printable(test2));
	printf("Test 3 (\"%s\"): %d\n", test3, ft_str_is_printable(test3));
	printf("Test 4 (\"%s\"): %d\n", test4, ft_str_is_printable(test4));
	printf("Test 5 (\"%s\"): %d\n", test5, ft_str_is_printable(test5));
	return (0);
}