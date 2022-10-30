/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:13:38 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/17 12:26:54 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
char *ft_strrchr(const char *s, int c)
{
    int i;
    i = strlen(s) - 1;
    if (c == '\0')
        return(0);
    while (i > 0)
    {
        if(s[i] == c)
          return((char *)(s + i));
        i--;
    }
    return (0);
}
#include <stdio.h>

int main()
{
    char tst[]="yoyoyoyooy";
    char tst1[]="yoyoyoyooy";
    printf("%s\n",ft_strrchr(tst, 'o'));
    printf("%s\n",strrchr(tst1, 'o'));
    return(0);
}