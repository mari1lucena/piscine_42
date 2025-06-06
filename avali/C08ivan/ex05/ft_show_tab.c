/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ide-abre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 06:35:43 by ide-abre          #+#    #+#             */
/*   Updated: 2025/02/05 06:36:11 by ide-abre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	pow_10(int times)
{
	int	i;
	int	res;

	if (times == 0)
		return (1);
	i = 0;
	res = 1;
	while (i < times)
	{
		res *= 10;
		i++;
	}
	return (res);
}

int	count_digits(long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
	long	n;
	char	d;
	int		temp;
	int		i;

	i = 0;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		n = (long)nb;
		n = -n;
	}
	else
		n = (long)nb;
	i = count_digits(n) - 1;
	while (i >= 0)
	{
		temp = (n / pow_10(i)) % 10;
		d = temp + '0';
		write(1, &d, 1);
		i--;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	ft_putstr(par->str);
	write(1, "\n", 1);
	ft_putnbr(par->size);
	write(1, "\n", 1);
	ft_putstr(par->copy);
	write(1, "\n", 1);
}
