/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:20:01 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/10/09 17:02:38 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	checker;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	checker = 0;
	while (s[i])
	{
		while (accept[j])
		{
			if (s[i] == accept[j])
				checker++;
			j++;
		}
		if (checker == 0)
			return (i);
		j = 0;
		checker = 0;
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
	s3 = "aloe ";
	s4 = "";
	s5 = "zkv";
	s6 = "";
	s7 = "sei la eu oh!";
	s8 = "";

	printf("this is s1: %s\nthis is s2: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s2, strspn(s1, s2), ft_strspn(s1, s2));
	printf("this is s1: %s\nthis is s3: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s3, strspn(s1, s3), ft_strspn(s1, s3));
	printf("this is s1: %s\nthis is s4: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s4, strspn(s1, s4), ft_strspn(s1, s4));
	printf("this is s1: %s\nthis is s5: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s5, strspn(s1, s5), ft_strspn(s1, s5));
	printf("this is s1: %s\nthis is s6: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s6, strspn(s1, s6), ft_strspn(s1, s6));
	printf("this is s1: %s\nthis is s7: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s1, s7, strspn(s1, s7), ft_strspn(s1, s7));
	printf("this is s6: %s\nthis is s3: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s6, s3, strspn(s6, s3), ft_strspn(s6, s3));
	printf("this is s6: %s\nthis is s8: %s\nthis is the result: %lu\nthis is my result: %lu\n\n", s6, s8, strspn(s6, s8), ft_strspn(s6, s8));
}*/

