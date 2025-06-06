/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 01:04:30 by leschunc          #+#    #+#             */
/*   Updated: 2025/02/10 01:46:26 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write (1, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0') {
		ft_putchar(str[i]);
		i++;
	}
}

int main() {
	ft_putstr("Test case 42: ");
	ft_putnbr(42);
	ft_putchar('\n');

	ft_putstr("Test case 0: ");
	ft_putnbr(0);
	ft_putchar('\n');

	ft_putstr("Test case -42: ");
	ft_putnbr(-42);
	ft_putchar('\n');

	ft_putstr("Test case 12345: ");
	ft_putnbr(12345);
	ft_putchar('\n');

	ft_putstr("Test case -98765: ");
	ft_putnbr(-98765);
	ft_putchar('\n');

	ft_putstr("Test case INT_MAX: ");
	ft_putnbr(2147483647);
	ft_putchar('\n');

	ft_putstr("Test case INT_MIN: ");
	ft_putnbr(-2147483648);
	ft_putchar('\n');

	ft_putstr("Test case 9: ");
	ft_putnbr(9);
	ft_putchar('\n');

	ft_putstr("Test case -9: ");
	ft_putnbr(-9);
	ft_putchar('\n');

	ft_putstr("Test case 10: ");
	ft_putnbr(10);
	ft_putchar('\n');

	ft_putstr("Test case -10: ");
	ft_putnbr(-10);
	ft_putchar('\n');

	return 0;
}
