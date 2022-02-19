/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:50:50 by jaewokim          #+#    #+#             */
/*   Updated: 2022/02/05 10:50:52 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	k = i;
	while (s1[k] != '\0')
		k++;
	k--;
	while (k > i && ft_strchr(set, s1[k]))
		k--;
	if (i > k)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (k - i + 2));
	if (!str)
		return (NULL);
	while (i <= k)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
