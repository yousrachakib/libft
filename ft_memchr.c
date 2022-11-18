/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:07:29 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/17 22:49:23 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c1;
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	c1 = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == c1)
			return ((ptr + i));
		i++;
	}
	return (0);
}
