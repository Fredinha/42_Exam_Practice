/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:33:03 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/10 12:55:47 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	present_in_first(char	c, char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		if (string[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	copy_i;
	int	first_time;

	first_time = 1;
	i = 0;
	
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (i != 0)
			{	
				copy_i = i - 1;
				while (copy_i >= 0)
				{
					if (argv[1][copy_i] == argv[1][i])
						first_time = 0;
					copy_i--;
				}
			}
			if (first_time == 0)
				i++;
			else
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			first_time = 1;
		}
		i = 0;
		while (argv[2][i])
		{
			if(present_in_first(argv[2][i], argv[1]) == 1)
				i++;
			else
			{
				if (i != 0)
				{
					copy_i = i - 1;
					while (copy_i >= 0)
					{
						if (argv[2][copy_i] == argv[2][i])
							first_time = 0;
						copy_i--;
					}
				}
				if (first_time == 0)
					i++;
				else
				{
					write(1, &argv[2][i], 1);
					i++;
				}
				first_time = 1;
			}
		}		
	}
	write (1, "\n", 1);
	return (0);
}
