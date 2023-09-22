/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:56:31 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/13 16:04:55 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 128;
	while (i > 0)
	{
		if ((i & octet) > 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i = i >> 1;
	}
}

/*int	main(void)
{
	unsigned char	octet;

	octet = 131;
	print_bits(octet);
	return (0);
}*/
