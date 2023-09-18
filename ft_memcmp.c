/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:17:25 by xili              #+#    #+#             */
/*   Updated: 2023/09/14 15:05:11 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*str1;
	unsigned const char	*str2;

	str1 = (unsigned const char *)s1;
	str2 = (unsigned const char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char a[5] = "abszf";
	char b[5] = "abdcf";
	char c[0];
	printf("%d\n",memcmp(a,c,2));
	printf("%d\n",ft_memcmp(a,c,2));
	printf("%d\n",memcmp(a,c,2));


	printf("%d\n",ft_memcmp(a,b,2));
	printf("%d\n", memcmp(a,b,2));
	return (0);
}
*/