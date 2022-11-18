/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:37:37 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/14 00:54:24 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[i] == '\0')
	{
		return ((char *) s1);
	}
	while ((s1[i] != '\0') && i < n)
	{
		j = 0;
		while ((s1[i + j] == s2[j]) && (i + j < n))
		{
			if (s2[j + 1] == '\0')
			{
				return ((char *)s1 + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
