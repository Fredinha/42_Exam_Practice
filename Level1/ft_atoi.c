/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:31:34 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/06 17:30:23 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	signal;
	int	nbr;

	i = 0;
	nbr = 0;
	signal = 1;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '-')
	{
		signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * signal);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;
	int	e;
	int	f;
	int	g;
	int	h;
	int     aa;
        int     bb;
        int     cc;
        int     dd;
        int     ee;
        int     ff;
	int	gg;
	int	hh;

	aa = atoi("   +---+1234");
	bb = atoi("  		 -++-+745627");
	cc = atoi("-78");
	dd = atoi("123456");
	ee = atoi("f  -34");
	ff = atoi("  876f99");
	gg = atoi("   -75463774");
	hh = atoi("   9588493");
	a = ft_atoi("   +---+1234");
        b = ft_atoi("              -++-+745627");
        c = ft_atoi("-78");
        d = ft_atoi("123456");
        e = ft_atoi("f  -34");
        f = ft_atoi("  876f99");
	g = ft_atoi("   -75463774");
        h = ft_atoi("   9588493");

	printf("real %d, mine %d\n", aa, a);
	printf("real %d, mine %d\n", bb, b);
	printf("real %d, mine %d\n", cc, c);
	printf("real %d, mine %d\n", dd, d);
	printf("real %d, mine %d\n", ee, e);
	printf("real %d, mine %d\n", ff, f);
	printf("real %d, mine %d\n", gg, g);
	printf("real %d, mine %d\n", hh, h);

}*/
