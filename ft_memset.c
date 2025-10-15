/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huda-roc <huda-roc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:47:19 by huda-roc          #+#    #+#             */
/*   Updated: 2025/10/15 11:51:55 by huda-roc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*prt;
	size_t			i;

	prt = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		prt[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
