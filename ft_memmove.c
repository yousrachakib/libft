/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:48:03 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/20 22:23:58 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void  *ft_memmove(void *dst, const void *src, size_t len) //Copies len bytes from the memory of src to dst. Memories may overlap. 
//First, the bytes in src are copied into a temporary array and then to dst.
{
    char *d;
    char *s;
    
    d = (char *) dst; // cast char 1byte.
    s = (char *) src;
    if (!dst && !src)
        return(dst);    
    if (s < d) // handling the overlap
        while (len--)
            d[len] = s[len];           
    else if (d < s)
        memcpy(d, s, len); //no over lap , will copy easily 
    return (d);
}
int main()
{
    char test[] ="HelloWorld";
    char *s1;
    char *s2;
    s1 = ft_memmove(test + 2, test + 1, 4);
    s2 = memmove(test + 2, test + 1, 4);
    printf("%s\n", s1);
    printf("%s\n", s2);
    return 0;
}
