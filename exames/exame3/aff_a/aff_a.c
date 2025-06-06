/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:29:07 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/06 19:44:13 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Escreva um programa que receba uma string e exiba o primeiro caractere 'a' dela
encontra nele, seguido por uma nova linha. Se não houver caracteres 'a' no
string, o programa apenas escreve uma nova linha. Se o número de parâmetros não for
1, o programa exibe 'a' seguido por uma nova linha.

Exemplo:

$> ./aff_a "abc" | gato -e
um $
$> ./aff_a "dubO a POIL" | gato -e
um $
$> ./aff_a "zz enviou o poney" | gato -e
$
$>./aff_a | gato -e
um $*/

#include <unistd.h>
/*int	main(int ac, char **av)
{
	int	i;
	
	i = 0;
	if (av[1][i] != '\0' && ac == 2)
	{
		if(av[1][i] != 'a')
			write(1, "\n", 1);
	}
	i++;
	write(1, "a\n", 2);
} */

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i] != '\0')
		{
			if(av[1][i] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}