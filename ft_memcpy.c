/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:16:37 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/18 15:54:50 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	unsigned char		*str;
	size_t				i;

	i = 0;
	ptr = (unsigned char *) dst;
	str = (unsigned char *) src;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
