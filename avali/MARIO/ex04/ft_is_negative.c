/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maferre2 <maferre2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:39:57 by maferre2          #+#    #+#             */
/*   Updated: 2025/01/23 20:44:34 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

/*
int main (int n)
{
	ft_is_negative(12);
	ft_is_negative(-12);
	return (0);
}
*/

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
int main (int n)
{
        ft_is_negative(-12);
        return (0);
}
