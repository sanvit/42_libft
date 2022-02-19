/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:43:58 by jaewokim          #+#    #+#             */
/*   Updated: 2022/02/05 10:43:59 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;
	int		j;

	i = 0;
	sign = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	if (n < 0)
	{
		sign = 1;
		n = -n;
		i++;
	}
	j = n;
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i--)
	{
		str[i] = (j % 10) + '0';
		j = j / 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}
