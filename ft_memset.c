/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:28:05 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/11 20:48:35 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}

/* int main()
{
    char str[8] = "yousra63";
    printf("%s\n", ft_memset(str, 'd', 9));
    // printf("%s\n", memset(str, 'd', 9));
    return 0;    
}*/
