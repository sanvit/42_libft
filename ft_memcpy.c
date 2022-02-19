/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:32:17 by jaewokim          #+#    #+#             */
/*   Updated: 2022/01/12 00:40:54 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_copy;
	unsigned char	*src_copy;

	if (!dst || !src)
		return (0);
	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	while (n--)
		*dst_copy++ = *src_copy++;
	return (dst);
}
