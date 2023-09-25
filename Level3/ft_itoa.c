/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:59:05 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/25 16:32:47 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	number_len(long n)
{
	int	i;

	i = 0;
	if (n < 0)
		n = -n;
	while (n)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int	spaces;
	char	*string;
	int	sign;

	sign = 0;
	if (nbr < 0)
		sign = 1;
	n = nbr;
	spaces = number_len(n);
	string = malloc(sizeof(char) * (spaces + sign + 1));
	if (!string)
		return (NULL);
	if (n == 0)
	{
		string[0] = '0';
		string[1] = '\0';
		return (string);
	}
	string[spaces + sign] = '\0';
	spaces--;
	if (n < 0)
	{
		string[0] = '-';
		n = -n;
	}
	while (n)
	{
		string[spaces + sign] = n % 10 + '0';
		n = n / 10;
		spaces--;
	}
	return (string);
}

/*#include <stdio.h>

int	main(int argc, char **argv)
{ 	
	if (argc != 2)
 		return 0;
 	int n = atoi(argv[1]);
 	char *str = ft_itoa(n);
	printf("%s\n", str);
}*/
