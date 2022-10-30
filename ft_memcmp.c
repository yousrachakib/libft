/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:19:59 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/17 14:35:45 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ptr;
    unsigned char *str;
    int i;
    
    ptr = (unsigned char *) s1;
    str = (unsigned char *) s2;
    i = 0;

    while (i < n)
    {
        if(ptr[i] != str[i])
            return(ptr[i] - str[i]);
        i++;
    }
    return(0);
}
int main()
{
    char tst[] = "hyf";
    char tst1[] = "hyf";
    printf("%d\n", ft_memcmp(tst,tst1, 4));
    // printf("%d\n", memcmp(tst,tst1, 4));
    return 0;
}