/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:05:34 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/13 16:27:15 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	char	firstbits;
	char	lastbits;

	firstbits = octet << 4;
	lastbits = octet >> 4;
	octet = firstbits | lastbits;
	return (octet);
}

/*int	main(void)
{
	unsigned char	octet;
	int	i;

	i = 128;
	octet = 15;
	write(1, "the original: ", 14);
	while (i > 0)
	{
		if ((octet & i) > 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i = i >> 1;
	}
	octet = swap_bits(octet);
	write(1, "\nmine: ", 7);
	i = 128;
	while (i > 0)
	{
		if ((octet & i) > 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i = i >> 1;
	}
	return (0);
}*/
