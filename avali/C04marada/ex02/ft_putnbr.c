/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:48:53 by marada            #+#    #+#             */
/*   Updated: 2025/02/09 01:06:32 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	count_nbr(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		i++;
		nbr /= 10;
	}
	return (i);
}

int	paslinhas(int *nbr)
{
	if (*nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (0);
	}
	if (*nbr < 0)
	{
		write(1, "-", 1);
		*nbr *= -1;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	int	digits;
	int	nbr;
	int	digito;

	if (paslinhas(&nb) == 0)
		return ;
	digits = count_nbr(nb);
	while (digits > 0)
	{
		nbr = digits - 1;
		digito = nb;
		while (nbr > 0)
		{
			digito /= 10;
			nbr--;
		}
		digito = digito % 10 + 48;
		write(1, &digito, 1);
		digits--;
	}
}

int	main(void)
{
	ft_putnbr(990);
	write(1, "\n", 1);
	return 0;
}
