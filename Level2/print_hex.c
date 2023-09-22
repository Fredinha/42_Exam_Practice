/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:31:27 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/14 16:38:06 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_hexa(int number)
{
	char	*hexa_base = "0123456789abcdef";

	if (number > 16)
		put_hexa(number / 16);
	write(1, &hexa_base[number % 16], 1);
}

int	simple_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i])
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result);
}
	
int	main(int argc, char **argv)
{
	int	number;

	number = 0;
	if (argc == 2)
	{
		number = simple_atoi(argv[1]);
		put_hexa(number);
	}
	write(1, "\n", 1);
	return (0);
}
