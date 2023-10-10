/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:59:58 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/10 12:32:00 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int	i;
	int	biggest_n;
	
	i = 0;
	if (len == 0)
		return (0);
	biggest_n = tab[i];
	while (tab[i])
	{
		if (tab[i] > biggest_n)
			biggest_n = tab[i];
		i++;
	}
	return(biggest_n);
}

/*int	main(void)
{
	int	tab[10];
	
	tab[0] = 27;
	tab[1] = 34;
	tab[2] = 2;
	tab[3] = 896;
	tab[4] = 13;
	tab[5] = 765;
	tab[6] = -73;
	tab[7] = -987;
	tab[8] = 0;
	tab[9] = 28;
	printf("%d", max(tab, 10));
}*/