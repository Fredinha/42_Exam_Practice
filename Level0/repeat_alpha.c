/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 10:47:50 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/12 11:40:15 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] >= 97 && argv[1][i] <= 122)
		{
			x = argv[1][i] - 96;
			while (x != 0)
			{
				write (1, &argv[1][i], 1);
				x--;
			}
			x = 0;
		}
		else if (argv[1][i] >= 65 && argv[1][i] <= 90)
                {
                        x = argv[1][i] - 64;
                        while (x != 0)
                        {
                                write (1, &argv[1][i], 1);
                                x--;
                        }
                        x = 0;
                }
		else
			write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

