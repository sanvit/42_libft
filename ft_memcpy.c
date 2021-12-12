/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:32:17 by jaewokim          #+#    #+#             */
/*   Updated: 2021/12/12 20:35:28 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	while (n--)
		*dst_copy++ = *src_copy++;
	return (dst);
}
