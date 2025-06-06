/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 04:15:05 by marada            #+#    #+#             */
/*   Updated: 2025/02/09 01:16:17 by mlucena-         ###   ########.fr       */
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

int	value(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (a == base[i])
			return (i);
		i++;
	}
	return (-1);
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
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || base[i] == '	')
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
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nega;
	int	nbr;
	int	base_n;

	nega = 1;
	nbr = 0;
	base_n = count_base(base);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			nega *= -1;
		str++;
	}
	while (value(*str, base) != -1 && *str)
	{
		nbr *= base_n;
		nbr += value(*str, base);
		str++;
	}
	return (nbr * nega);
}

int main(void)
{
	printf("%i\n", ft_atoi_base("fb", "0123456789abcde"));
	return 0;
}
