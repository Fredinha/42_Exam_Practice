/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:18:29 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/09 12:42:48 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		j = 0;
		i++;
	}
	return (i);
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
	char	*s8;
	int		i;

	i = 0;
	s1 = "ola eu sou a fred";
	s2 = "ola";
	s3 = "aloe";
	s4 = "rir";
	s5 = "zkv";
	s6 = "";
	s7 = "   el";
	s8 = "";

	printf("this is s1: %s\nthis is s2: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s2, strcspn(s1, s2), ft_strcspn(s1, s2));
	printf("this is s1: %s\nthis is s3: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s3, strcspn(s1, s3), ft_strcspn(s1, s3));
	printf("this is s1: %s\nthis is s4: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s4, strcspn(s1, s4), ft_strcspn(s1, s4));
	printf("this is s1: %s\nthis is s5: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s5, strcspn(s1, s5), ft_strcspn(s1, s5));
	printf("this is s1: %s\nthis is s6: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s6, strcspn(s1, s6), ft_strcspn(s1, s6));
	printf("this is s1: %s\nthis is s7: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s7, strcspn(s1, s7), ft_strcspn(s1, s7));
	printf("this is s6: %s\nthis is s3: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s6, s3, strcspn(s6, s3), ft_strcspn(s6, s3));
	printf("this is s6: %s\nthis is s8: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s6, s8, strcspn(s6, s8), ft_strcspn(s6, s8));
}*/