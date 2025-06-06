/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gorpinel <gorpinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:12:57 by gorpinel          #+#    #+#             */
/*   Updated: 2025/02/01 18:53:46 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write (1, &"P", 1);
	else
		write (1, &"N", 1);
}

int	main(void)
{
	ft_is_negative(0);
	return (0);
}
