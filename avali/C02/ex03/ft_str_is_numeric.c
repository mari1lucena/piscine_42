/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 00:09:29 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:27:45 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	char	*test1 = "123456";
	char	*test2 = "11!11!!!";
	char	*test3 = "42lisbo4";
	char	*test4 = "01001000";
	char	*test5 = "";

	printf("Test 1 (\"%s\"): %d\n", test1, ft_str_is_numeric(test1));
	printf("Test 2 (\"%s\"): %d\n", test2, ft_str_is_numeric(test2));
	printf("Test 3 (\"%s\"): %d\n", test3, ft_str_is_numeric(test3));
	printf("Test 4 (\"%s\"): %d\n", test4, ft_str_is_numeric(test4));
	printf("Test 5 (\"%s\"): %d\n", test5, ft_str_is_numeric(test5));
	return (0);
}