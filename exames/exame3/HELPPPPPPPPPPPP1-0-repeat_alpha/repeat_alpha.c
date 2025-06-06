/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlucena- <mlucena-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 23:37:29 by mlucena-          #+#    #+#             */
/*   Updated: 2025/02/06 23:55:51 by mlucena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void repeat_alpha(char *str)
{
    int i;
    int times;
    char c;    
	
	i = 0;
    times = 0;
    while (str[i] != '\0')
    {
		if (str[i] >= 'a' && str[i] <= 'z')
        {	while(times <= str[i] - 'a')
        	{
            	c = str[i];
            	write(1, &c, 1);
            	times++;
    		}
			times = 0;
        	i++;
		}
		else
		{
			while(times <= str[i] - 'A')
        {
            c = str[i];
            write(1, &c, 1);
            times++;
    	}
		times = 0;
        i++;
		}
	}
}

int main(int a, char **b)
{
    repeat_alpha(b[1]);
    return (0);
}

