/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:05:18 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/14 17:36:54 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
    int i;
    i = 0;
    while (s[i])
    {
        if(s[i] == (char) c) // cast to char so we can keep working in the asccii circle 
            return ((char *) (s + i)); // cast 
        i++;
    }
    return 0;
}
#include <stdio.h>
int main ()
{
    char *res;
    char tst[] = "yousra";
    res = ft_strchr(tst, 'u' + 256);
    printf("%s\n",res);
    return 0;
}