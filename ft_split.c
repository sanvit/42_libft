/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaewokim <jaewokim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 10:48:07 by jaewokim          #+#    #+#             */
/*   Updated: 2022/02/19 10:30:37 by jaewokim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	unsigned int	num;
	unsigned int	i;
	char			prev;

	i = 0;
	num = 0;
	prev = c;
	while (s[i])
	{
		if (s[i] != c && prev == c)
			num++;
		prev = s[i];
		i++;
	}
	return (num);
}

static int	ft_count_word_len(char const *s, char c, unsigned int i)
{
	unsigned int	len;

	len = 0;
	while (s[i + len] != c && s[i + len])
		len++;
	return (len);
}

static void	ft_split_free(char **str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	*ft_create_word(char const *s, size_t *i, char c)
{
	size_t	k;
	char	*word;

	k = 0;
	word = (char *)malloc(sizeof(char) * (ft_count_word_len(s, c, *i) + 1));
	if (!word)
		return (0);
	while (s[*i] != c && s[*i])
		word[k++] = s[(*i)++];
	word[k] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	str = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j] = ft_create_word(s, &i, c);
			if (!str[j++])
			{
				ft_split_free(str);
				return (0);
			}
		}
		else
			i++;
	}
	str[j] = 0;
	return (str);
}
