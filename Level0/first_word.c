/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:36:36 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/13 12:48:36 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][i] && (argv[1][i] == 32 || argv[1][i] == 9))
			i++;
	while (argv[1][i] && (argv[1][i] != 32 && argv[1][i] != 9))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}