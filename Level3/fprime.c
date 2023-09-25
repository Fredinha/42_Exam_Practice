/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:54:39 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/25 15:50:35 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_it_prime(int n)
{
	int	i;

	i = 2;
	while (n > i)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	first_prime;
	int	n;

	i = 2;
	first_prime = 1;
	if (argc == 2)
	{
		n = atoi(argv[1]);
		if (n == 1)
			printf("1");
		while (n >= i)
		{
			if (n % i == 0 && is_it_prime(i))
			{
				if (first_prime == 1)
				{
					printf("%i", i);
					first_prime = 0;
				}
				else
					printf("*%i", i);
				n = n / i;
			}
			else
				i++;
		}
	}
	printf("\n");
}
