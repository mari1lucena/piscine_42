/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomusoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 14:24:20 by jomusoni          #+#    #+#             */
/*   Updated: 2025/02/02 14:24:28 by jomusoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	ft_strlen(char *str)
{
	int	count;
	
	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return(count);
}

int	main(void)
{
	
	char	src[] = "Hello, world";
	int	str_leng = ft_strlen(src);
	
	char	dest[str_leng + 1];
	dest[0] = '\0';

	printf("string src : %s \nstring dest: %s \n", src, dest);
	ft_strcpy(dest, src);
	printf("string src : %s \nstring dest: %s \n", src, dest);
	return (0);
}*/
