/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@42student.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:15:24 by huda-roc          #+#    #+#             */
/*   Updated: 2025/10/24 14:16:04 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	_ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*_ft_get_word(const char *s, char c, size_t *index)
{
	int		i;
	size_t	start;

	i = *index;
	while (s[i] == c)
		i++;
	start = i;
	while (s[i] && s[i] != c)
		i++;
	*index = i;
	return (ft_substr(s, start, i - start));
}

static void	_ft_destroy_array_str(char **result, size_t i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;
	size_t	index;

	if (!s)
		return (NULL);
	words = _ft_count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (i < words)
	{
		result[i] = _ft_get_word(s, c, &index);
		if (!result[i])
		{
			_ft_destroy_array_str(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
