/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:34:10 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/14 12:45:03 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    if ( dstsize == 0)
     return(ft_strlen(src));
    while (src[i] && i < (dstsize - 1))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(ft_strlen(src));
}
int main()
{
   int res;
   int res1;
    char d[]= "yousra";
    char s[]= "chakib";
    
    res = ft_strlcpy(d,s,4);
    res1 = strlcpy(d,s,4);
    printf("%d\n",res);
    printf("%d\n",res1);
    return(0);
}