/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:16:37 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/20 22:23:38 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
//Copies n bytes from memory area src to memory of dst. 
//The memory areas must not overlap. Use ft_memmove if the memory areas do overlap.
{
    char *ptr;
    const char *str;
    int i;
    i = 0;
    ptr = (char *) dst;
    str = (char *) src;
    if (dst == NULL && src == NULL)
        return(0);
    
    while (i < n)
    {
        ptr[i] = str[i];
        i++;
    }
    return(ptr);
}
 int main()
 {
     char test[]="srcc";
     char tst[]="dest";
     printf("%s\n", ft_memcpy(tst, test, 4));
     return 0;
 }