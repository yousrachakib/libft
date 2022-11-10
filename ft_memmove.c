/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:48:03 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/09 21:06:17 by yochakib         ###   ########.fr       */
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

/* int main()
{
    char test[] ="HelloWorld";
    char *s1;
    char *s2;
    s1 = ft_memmove(test + 2, test + 1, 4);
    s2 = memmove(test + 2, test + 1, 4);
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
} */
