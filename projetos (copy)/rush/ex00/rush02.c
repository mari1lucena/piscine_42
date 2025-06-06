/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfechine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:55:42 by vfechine          #+#    #+#             */
/*   Updated: 2025/01/26 11:55:46 by vfechine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_logic_line(int x, char startchar, char midchar, char endchar)
{
	ft_putchar(startchar);
	while ((x - 1) > 1)
	{
		ft_putchar(midchar);
		x--;
	}
	if (x > 1)
	{
		ft_putchar(endchar);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_print_logic_line(x, 'A', 'B', 'A');
		y--;
		while (y > 1)
		{
			ft_print_logic_line(x, 'B', ' ', 'B');
			y--;
		}
		if (y > 0)
			ft_print_logic_line(x, 'C', 'B', 'C');
	}
}
