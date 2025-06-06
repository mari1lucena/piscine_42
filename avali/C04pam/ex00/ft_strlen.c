/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prondina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:50:52 by prondina          #+#    #+#             */
/*   Updated: 2025/02/09 19:51:09 by prondina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int	i;
	
	char frase[] = "Nao desista!";
	
	i = ft_strlen(frase);

	printf("A frase: \"%s\", contem \'%d\' caracteres", frase, i);
	return (0);
}*/
