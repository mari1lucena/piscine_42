/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecabinda <ecabinda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:26:58 by ecabinda          #+#    #+#             */
/*   Updated: 2025/01/23 20:06:34 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	char	ans;

	if (n < 0)
	{
		ans = 'n';
		write(1, &ans, 1);
	}
	else
	{
		ans = 'p';
		write(1, &ans, 1);
	}
}
int main()
{
   ft_is_negative(-2);
}
