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
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1) - 1;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] != '\0' && ft_strchr(set, s1[j]) && i < j)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (str)
		ft_strlcpy(str, &s1[i], j - i + 2);
	return (str);
}
