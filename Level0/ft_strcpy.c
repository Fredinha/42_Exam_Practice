/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:07:14 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/09/13 12:34:36 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s1 && s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*int	main(void)
{
	char dest[20] = "frederica";
	const char	*src = "FRED";
	char mydest[20] = "frederica";
	char	*mysrc = "FRED";
	strcpy(dest, src);
	ft_strcpy(mydest, mysrc);
	printf("this is the original: %s; and this is mine: %s", dest, mydest);
	return (0);
}*/
