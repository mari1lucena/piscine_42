/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 13:17:18 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/13 00:47:16 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi (char *str)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	while( str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - 48;
		i++;
	}
	return (result * sign);
}
