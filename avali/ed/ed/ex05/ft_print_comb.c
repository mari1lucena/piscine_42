/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabinda <ecabinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:47:29 by ecabinda          #+#    #+#             */
/*   Updated: 2025/01/23 20:10:17 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	ft_putchar(char c);
void	ft_prox_nbrs(char c, char d, char u);

/*int   main(void)
{
    ft_print_comb();
    return (0);
}*/

void	ft_print_comb(void)
{
	char	cent;
	char	dez;
	char	und;

	cent = '0';
	while (cent <= '7')
	{
		dez = cent + 1;
		while (dez <= '8')
		{
			und = dez + 1;
			while (und <= '9')
			{
				ft_prox_nbrs(cent, dez, und);
				und++;
			}
			dez++;
		}
		cent++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_prox_nbrs(char c, char d, char u)
{
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(u);
	if (!(c == '7' && d == '8' && u == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('\n');
	}
}
int   main(void)
{
    ft_print_comb();
    return (0);
}
