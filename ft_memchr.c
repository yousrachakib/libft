/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:07:29 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/20 22:24:27 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n) //Scans the initial n bytes of s for the first instance of c
{
    unsigned char c1;
    unsigned char *ptr;
    int i;
    
    ptr = (unsigned char *) s;
    c1 = (unsigned char) c1;
    i = 0;
    
    while (i < n)
    {
        if(ptr[i] == c)
            return((ptr + i));
        i++;
    }
    return(0);
}
int main()
{
    unsigned char tst[]="yousra";
    printf("%s\n", ft_memchr(tst, 's', 6));
    // printf("%s\n", memchr(tst, 's', 6));
    return 0;
}