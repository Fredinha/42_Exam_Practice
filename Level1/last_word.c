/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:34:42 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/10 14:42:04 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	len;
	int	begin_of_word;
	int	end_of_word;

	len = 0;
	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		if (len > 0)	
			len = len - 1;
		while (argv[1][len] && (argv[1][len] == 9 || argv[1][len] == 32))
			len--;
		if (len < 0)
		{
			write (1, "\n", 1);
			return (0);
		}
		end_of_word = len;
		begin_of_word = len;
		while (len >= 0 && (argv[1][len] != 9 && argv[1][len] != 32))
		{
			begin_of_word--;
			len--;
		}
		if (begin_of_word != end_of_word)
			begin_of_word = begin_of_word + 1;
		while (begin_of_word <= end_of_word)
		{
			write (1, &argv[1][begin_of_word], 1);
			begin_of_word++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
