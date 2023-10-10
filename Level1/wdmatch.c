/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:02:39 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/10 13:23:05 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	c_present;
	int	i;
	int j;
	
	i = 0;
	j = 0;
	c_present = 1;
	if (argc == 3)
	{
		while (argv[1][i] && c_present == 1)
		{
			c_present = 0;
			while (argv[2][j] && c_present == 0)
			{
				if (argv[1][i] == argv[2][j])
					c_present = 1;
				j++;
			}
			i++;
		}
		if (c_present == 1)
		{
			i = 0;
			while (argv[1][i] != '\0')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
