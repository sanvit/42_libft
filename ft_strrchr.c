/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 23:13:56 by jaewokim          #+#    #+#             */
/*   Updated: 2022/02/20 23:21:33 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*found;

	found = 0;
	while (*s)
	{
		if (*s == (char)c)
			found = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (found);
}
