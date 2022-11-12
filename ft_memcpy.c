/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:16:37 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/12 14:39:58 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*ptr;
	const char	*str;
	size_t		i;

	i = 0;
	ptr = (char *) dst;
	str = (char *) src;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
