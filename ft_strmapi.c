/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:12:28 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/09 21:43:14 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	a;
	size_t	i;
	char	*c;

	a = 0;
	i = ft_strlen(s);
	c = malloc (sizeof(char) * (i + 1));
	if (!s)
		return (0);
	while (a < i)
	{
		c[a] = f(a, s[a]);
		a++;
	}
	c[a] = '\0';
	return (c);
}
