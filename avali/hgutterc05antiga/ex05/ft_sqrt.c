/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgutterr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:25:21 by hgutterr          #+#    #+#             */
/*   Updated: 2025/02/01 21:18:17 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	else
		return (0);
}

int	main()
{
	int	nb;

	nb = 110;
	printf("the square root of %d is %d", nb, ft_sqrt(nb));
}

