/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 01:30:58 by dubolota          #+#    #+#             */
/*   Updated: 2025/02/05 04:35:39 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main(void)
{
	char	str1[] = "hello forty-two";
	char	str2[] = "HeLLoOo fOrtY-twO";
	char	str3[] = "1101CisgrEAaaaat!111";
	
	printf("Test 1 (Before): %s\n", str1);
	printf("Test 1 (After): %s\n", ft_strupcase(str1));
	printf("Test 2 (Before): %s\n", str2);
	printf("Test 2 (After): %s\n", ft_strupcase(str2));
	printf("Test 3 (Before): %s\n", str3);
	printf("Test 3 (After): %s\n", ft_strupcase(str3));
	return (0);
}