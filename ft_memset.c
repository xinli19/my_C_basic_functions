/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:21:13 by xili              #+#    #+#             */
/*   Updated: 2023/09/14 14:47:56 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
//description: 
//s: pointer to the memory needed to fill
//c: constant byte: 0-255
//n: number of bytes to fill the memory area

int	main(void)
{
	char	a[10];
	char	b[10];
	int		i;
//1.
	memset(a,0,sizeof(a));
	ft_memset(b,0,sizeof(b));
	for (i = 0; i < sizeof(b);i++)
	{
		if (a[i] != b[i])
			printf("first test: filling with Zeroes: failed\n");
		printf("%d,%d\n",a[i],b[i]);
	}
	printf("\n");
//2.
	memset(a,0xFF,sizeof(a));
	ft_memset(b,0xFF,sizeof(b));
	for (i = 0; i < sizeof(b);i++)
	{
		if (a[i] != b[i])
			printf("second test: filling with non-Zeroes: failed\n");
		printf("%d,%d\n",a[i],b[i]);
	
	}
	printf("\n");
//3.
	memset(a+2,0xAA,4);
	ft_memset(b+2,0xAA,4);
	for (i = 0; i < sizeof(b);i++)
	{
		if (a[i] != b[i])
			printf("third test: partly fill the arr: failed\n");
		printf("%d,%d\n",a[i],b[i]);
	
	}
	printf("\n");
//4.
	memset(a,-1,sizeof(a));
	ft_memset(b,-1,sizeof(b));
	for (i = 0; i < sizeof(b);i++)
	{
		if (a[i] != b[i])
			printf("fourth test: filling with negative value: failed\n");
		printf("%d,%d\n",a[i],b[i]);
	}
	printf("\n");
	
//5.
	memset(a,256,sizeof(a));
	ft_memset(b,256,sizeof(b));
	for (i = 0; i < sizeof(b);i++)
	{
		if (a[i] != b[i])
			printf("fifth test: filling with value greater than 255: failed\n");
		printf("%d,%d\n",a[i],b[i]);
	}
	printf("\n");
//6.
	memset(a,-1,0);
	ft_memset(b,-1,0);
	for (i = 0; i < sizeof(b);i++)
	{
		if (a[i] != b[i])
			printf("sixth test: empty arr: failed\n");
		printf("%d,%d\n",a[i],b[i]);
	}
	printf("\n");

//7.
	memset(a,-1,-4);
	ft_memset(b,-1,-4);
	for (i = 0; i < sizeof(b);i++)
	{
		if (a[i] != b[i])
			printf("seventh test: negativ arr: failed\n");
		printf("%d,%d\n",a[i],b[i]);
	}
	printf("\n");	
	
	return (0);
}
*/