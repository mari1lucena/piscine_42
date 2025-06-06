/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 03:27:29 by marada            #+#    #+#             */
/*   Updated: 2025/02/09 01:12:12 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	count_base(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	count_nbr(long nbr, int base)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr > 0)
	{
		i++;
		nbr /= base;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0')
		return (0);
	if (count_base(base) == 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && j != i)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	paslinhas(char *base, long *nbr)
{
	if (*nbr < 0)
	{
		write(1, "-", 1);
		*nbr *= -1;
	}
	if (check_base(base) == 0)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		digits;
	int		nb;
	int		base_n;
	long	digito;
	long	nbrlong;

	nbrlong = nbr;
	if (paslinhas(base, &nbrlong) == 0)
		return ;
	base_n = count_base(base);
	digits = count_nbr(nbrlong, base_n);
	while (digits > 0)
	{
		nb = digits - 1;
		digito = nbrlong;
		while (nb > 0)
		{
			digito /= base_n;
			nb--;
		}
		digito = base[digito % base_n];
		write(1, &digito, 1);
		digits--;
	}
}

int main(void)
{
	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);
	ft_putnbr_base(-10, "0123456789abcde");
	write(1, "\n", 1);
	return 0;
}
