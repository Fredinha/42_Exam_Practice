/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:57:36 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/06 15:57:22 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
			{
				c = 'z' - (argv[1][i] - 'a');
				write (1, &c, 1);
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
			{
                                c = 'Z' - (argv[1][i] - 'A');
                                write (1, &c, 1);
                        }
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
			{
                                c = 'm' - (argv[1][i] - 'n');
                                write (1, &c, 1);
                        }
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
			{
                                c = 'M' - (argv[1][i] - 'N');
                                write (1, &c, 1);
                        }
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
