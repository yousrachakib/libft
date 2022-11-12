/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:48:03 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/12 16:14:50 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s1;
	char	*s2;

	s1 = (char *)src;
	s2 = (char *)dst;
	if (dst <= src)
		dst = ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			s2[len] = s1[len];
	}
	return (dst);
}
