/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:32:17 by jaewokim          #+#    #+#             */
/*   Updated: 2022/02/20 16:39:27 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_copy;
	unsigned char	*src_copy;

	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (n--)
		*dst_copy++ = *src_copy++;
	return (dst);
}
