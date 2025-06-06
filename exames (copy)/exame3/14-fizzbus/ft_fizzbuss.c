/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fizzbuss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 02:39:37 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/13 04:56:27 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int nbr)
{
	char	c;
	if (nbr > 9)
		ft_putnbr( nbr / 10);
	c = nbr % 10 + 48;
	write(1, &c, 1);
}
int	main()
{
	int	nb = 1;
	
	while( nb <= 100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if(nb % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(nb);
		write(1, "\n", 1);	
		nb++;
	}
}