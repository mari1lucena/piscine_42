/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaraiva <rsaraiva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 13:18:15 by rsaraiva          #+#    #+#             */
/*   Updated: 2025/02/03 13:40:42 by rsaraiva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

void	ft_swap(char **p, char **p1)
{
	char	*tmp;

	tmp = *p;
	*p = *p1;
	*p1 = tmp;
}

int	ft_strcmp(char *s, char *s1)
{
	while (*s == *s1 && *s1)
	{
		s++;
		s1++;
	}
	return (*s - *s1);
}

void	ft_sort(char **argv, int args)
{
	int	i;
	int	j;
	int	len;

	len = args;
	while (len - 1)
	{
		i = 0;
		j = 1;
		while (j < len)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap(&argv[i], &argv[j]);
			i++;
			j++;
		}
		len--;
	}
}

int	main(int argc, char **argv)
{
	ft_sort(argv + 1, argc - 1);
	while (*(++argv))
		ft_putstr(*argv);
}
