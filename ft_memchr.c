/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:07:29 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/09 20:14:14 by yochakib         ###   ########.fr       */
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

/* int main()
{
    unsigned char tst[]="yousra";
    printf("%s\n", ft_memchr(tst, 's', 6));
    // printf("%s\n", memchr(tst, 's', 6));
    return 0;
}*/
