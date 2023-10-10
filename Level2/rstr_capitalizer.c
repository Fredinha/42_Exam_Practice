/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:17:22 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/10 16:41:12 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int len;
	
	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			len = 0;
			while (argv[i][len])
				len++;
			while (argv[i][j])
			{
				if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') || (argv[i][j] >= 'A' && argv[i][j] <= 'Z'))
				{
					if (j == len - 1)
					{
						if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
						{
							argv[i][j] = argv[i][j] - 32;
							write (1, &argv[i][j], 1);
						}
						else
							write (1, &argv[i][j], 1);
					}
					else
					{
						if (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\t')
						{
							if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
							{
								argv[i][j] = argv[i][j] - 32;
								write (1, &argv[i][j], 1);
							}
							else
								write (1, &argv[i][j], 1);
						}
						else
						{
							if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
							{
								argv[i][j] = argv[i][j] + 32;
								write (1, &argv[i][j], 1);
							}
							else
								write (1, &argv[i][j], 1);
						}
					}
				}
				else
					write (1, &argv[i][j], 1);
				j++;
			}
			i++;
			j = 0;
			write (1, "\n", 1);
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}

