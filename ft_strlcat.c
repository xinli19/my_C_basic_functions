/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:51:09 by xili              #+#    #+#             */
/*   Updated: 2023/09/18 17:18:10 by xili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_null_terminated(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	i = 0;
	d_len = (size_t)ft_strlen(dst);
	s_len = (size_t)ft_strlen((char *)src);
	if (size < d_len - 1 || size == 0 || is_null_terminated(dst) == 0
		|| is_null_terminated((char *)src) == 0)
		return (s_len + size);
	while (src[i] != '\0' && (size - 1 > d_len + i))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
/*	
int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char dest[30] = "rrrrrr";	
	printf("my:%zu\n",ft_strlcat(dest,"lorem ipsum dolor sit amet", 7));
	printf("original%zu",strlcat(dest,"lorem ipsum dolor sit amet", 7));
}
*/