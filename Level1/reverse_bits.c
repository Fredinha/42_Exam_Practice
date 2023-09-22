/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:27:27 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/14 10:36:47 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


// first version

/*unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 1;
	unsigned char	one = 0;
	unsigned char	two = 0;
	unsigned char	three = 0;
	unsigned char   four = 0;
        unsigned char   five = 0;
        unsigned char   six = 0;
	unsigned char   seven = 0;
        unsigned char   eight = 0;
        
	if ((i & octet) > 0)
		one = 128;
	i = 2;
	if ((i & octet) > 0)
                two = 64;
        i = 4;
	if ((i & octet) > 0)
                three = 32;
        i = 8;
	if ((i & octet) > 0)
                four = 16;
        i = 16;
	if ((i & octet) > 0)
                five = 8;
        i = 32;
	if ((i & octet) > 0)
                six = 4;
        i = 64;
	if ((i & octet) > 0)
                seven = 2;
        i = 128;
	if ((i & octet) > 0)
                one = 1;
        octet = one | two | three | four | five | six | seven | eight;
	return (octet);
}*/

//optimized version

//we do r*2 to add a zero in the end
//and we use that empty space, that zero in the end of r, to save the rest (octet % 2), so we can store the 0 or the 1 that is in the end of the octet
//after that we divide the octet in 2, so basically we cut the last bit (that we already saved in the end of r)
//the while makes sure this process is repeated 8 times
//we add another zero in the end of r, and the last bit moves to the left (and eventually will reach the first bit of the byte)
//in this new space we save the new rest
//and we cut another bit of the octet, so in the next cycle we can read the next byte

unsigned char	reverse_bits(unsigned char octet)
{
	int	r;
	int	i;

	i = 128;
	r = 0;
	while (i > 0)
	{
		r = r * 2 + octet % 2;
		octet = octet / 2;
		i = i >> 1;
	}
	return (r);
}

/*int	main (void)
{
	int	i;
	unsigned char	octet;

	write(1, "The original: ", 14);
	octet = 38;
	i = 128;
	while (i > 0)
	{
		if ((i & octet) > 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i = i >> 1;
	}
	i = 128;
	write (1, "\nMine: ", 7);
	octet = reverse_bits(octet);
	while (i > 0)
        {
                if ((i & octet) > 0)  
                        write(1, "1", 1);
                else
                        write(1, "0", 1);
                i = i >> 1;
        }
}*/
