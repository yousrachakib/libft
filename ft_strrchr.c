/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:13:38 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/09 21:46:17 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	if (s[i] == (char)c)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *) s + i);
		i--;
	}
	return (0);
}

/* #include <stdio.h>

int main()
{
    char tst[]="yoyoyoyooy";
    char tst1[]="yoyoyoyooy";
    printf("%s\n",ft_strrchr(tst, 'o'));
    printf("%s\n",strrchr(tst1, 'o'));
    return(0);
}*/
