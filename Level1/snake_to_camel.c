/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:00:34 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/14 15:27:26 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (argc != 2 || !argv[1][i])
	{
		write(1, "\n", 1);
		return (0);
	}
	if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
	{
		x = argv[1][i] + 32;
		write(1, &x, 1);
		i++;
	}
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == '_')
		{
			i++;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				x = argv[1][i] - 32;
				write (1, &x, 1);
			}
			else
				write (1, &argv[1][i], 1);
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
