/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:50:36 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/09 16:17:48 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int	length;
	int	i;
	char temp;
	
	length = 0;
	while (str[length] != '\0')
		length++;
	i = 0;
	while (i < length / 2)
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "ola, eu sou a frederica!";
	
	printf("the sentence is: %s\n", str);
	ft_strrev(str);
	printf("And the result is: %s\n", str);
	return (0);
}*/