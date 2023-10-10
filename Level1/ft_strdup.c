/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:46:48 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/09 12:55:36 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
	int	i;
	char	*copy;
	
	i = 0;
	while (src[i] != '\0')
		i++;
	copy = malloc(sizeof(char) * i + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return(copy);
}

/*int	main(void)
{
	char	*string;

	string = "hi! I'm Fred!";
	printf("this is strdup: %s\n", strdup(string));
	printf("this is mine: %s\n", ft_strdup(string));
}*/
