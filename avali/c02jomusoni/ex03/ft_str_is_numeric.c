/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomusoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:52:14 by jomusoni          #+#    #+#             */
/*   Updated: 2025/02/03 13:52:21 by jomusoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= '0' && str[count] <= '9')
			count++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	r;

	r = ft_str_is_numeric("0123456789");
	printf("return is: %d\n", r);
}*/
