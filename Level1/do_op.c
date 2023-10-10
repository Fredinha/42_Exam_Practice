/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:12:15 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/06 16:29:07 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	first;
	int	second;
	int	result;

	if (argc == 4)
	{
		first = atoi(argv[1]);
		second = atoi(argv[3]);
		if (argv[2][0] == '*')
			result = first * second;
		else if (argv[2][0] == '/')
                        result = first / second;
		else if (argv[2][0] == '%')
                        result = first % second;
		else if (argv[2][0] == '-')
                        result = first - second;
		else if (argv[2][0] == '+')
                        result = first + second;
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
