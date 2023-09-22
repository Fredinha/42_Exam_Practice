/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 14:48:40 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/13 11:45:35 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	if (argc != 4)
	{
		write (1, "\n", 1);
		return (0);
	}
	if (argv[2][1] != '\0' || argv[3][1] != '\0')
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == argv[2][0])
			x++;
		i++;
	}
	i = 0;
	if (x == 0)
	{
		while (argv[1][i])
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	else
	{
		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
