/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:43:46 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/10 11:59:15 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n < 0)
		return (0);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	while (n > 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

/*int	main(void)
{
	printf("if n is -1: %d\n", is_power_of_2(-1));
	printf("if n is 0: %d\n", is_power_of_2(0));
	printf("if n is 1: %d\n", is_power_of_2(1));
	printf("if n is 2: %d\n", is_power_of_2(2));
	printf("if n is 16: %d\n", is_power_of_2(16));
	printf("if n is 128: %d\n", is_power_of_2(128));
	printf("if n is 13: %d\n", is_power_of_2(13));
	printf("if n is 100: %d\n", is_power_of_2(100));
}*/