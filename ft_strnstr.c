/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:59:39 by huda-roc          #+#    #+#             */
/*   Updated: 2025/10/17 12:10:03 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *to_find, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*find)
	{
		return ((char *)to_find);
	}
	i = 0;
	while (to_find[i] && i < len)
	{
		j = 0;
		while (find[j] && (i + j) < len && to_find[i + j] == find[j])
		{
			j++;
		}
		if (!find[j])
		{
			return ((char *)(to_find + i));
		}
		i++;
	}
	return (NULL);
}
