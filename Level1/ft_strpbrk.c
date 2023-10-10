/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:00:13 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/09 14:55:07 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;
	char	*s6;
	char	*s7;
	
	s1 = "hello, my name is Fred";
	s2 = "amiga";
	s3 = "";
	s4 = "";
	s5 = "ztu";
	s6 = "hello, my name is Fred";
	s7 = "saudacoes, o meu nome e Fred";
	
	printf("first string is: %s\nsecond is: %s\nthe result is: %s\nmine is: %s\n\n", s1, s2, strpbrk((const char *)s1, (const char *)s2), ft_strpbrk((const char *)s1, (const char *)s2));
	printf("first string is: %s\nsecond is: %s\nthe result is: %s\nmine is: %s\n\n", s1, s3, strpbrk((const char *)s1, (const char *)s3), ft_strpbrk((const char *)s1, (const char *)s3));
	printf("first string is: %s\nsecond is: %s\nthe result is: %s\nmine is: %s\n\n", s1, s5, strpbrk((const char *)s1, (const char *)s5), ft_strpbrk((const char *)s1, (const char *)s5));
	printf("first string is: %s\nsecond is: %s\nthe result is: %s\nmine is: %s\n\n", s1, s6, strpbrk((const char *)s1, (const char *)s6), ft_strpbrk((const char *)s1, (const char *)s6));
	printf("first string is: %s\nsecond is: %s\nthe result is: %s\nmine is: %s\n\n", s3, s4, strpbrk((const char *)s3, (const char *)s4), ft_strpbrk((const char *)s3, (const char *)s4));
	printf("first string is: %s\nsecond is: %s\nthe result is: %s\nmine is: %s\n\n", s3, s6, strpbrk((const char *)s3, (const char *)s6), ft_strpbrk((const char *) s3, (const char *)s6));
	printf("first string is: %s\nsecond is: %s\nthe result is: %s\nmine is: %s\n\n", s5, s7, strpbrk((const char *)s5, (const char *)s7), ft_strpbrk((const char *)s5, (const char *)s7));
	printf("first string is: %s\nsecond is: %s\nthe result is: %s\nmine is: %s\n\n", s2, s7, strpbrk((const char *)s2, (const char *)s7), ft_strpbrk((const char *)s2, (const char *)s7));
}*/