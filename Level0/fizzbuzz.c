/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:01:56 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/13 11:32:45 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int i)
{
	write(1, &i, 1);
}

void	ft_putnbr(int i)
{
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		ft_putchar(i + '0');
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
