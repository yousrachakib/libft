/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:19:59 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/17 22:54:02 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*str;
	size_t			i;

	ptr = (unsigned char *) s1;
	str = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (ptr[i] != str[i])
			return (ptr[i] - str[i]);
		i++;
	}
	return (0);
}
