/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:57:18 by arpereir          #+#    #+#             */
/*   Updated: 2025/02/09 21:14:17 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) abs(Value)

int	abs(int nbr)

{
	if (nbr < 0)
		return (nbr * (-1));
	else
		return (nbr);
}

#endif
