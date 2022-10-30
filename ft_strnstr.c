/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:37:37 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/17 15:44:47 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    int i;
    int j;
    
    i = 0;
    j = 0;
    while (s1[i] && i < n)
    {
        while (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        if (s2[j] == '\0')
            return((char *) (s1 + (i - j)));
        else
            j = 0;
        i++;
    }
    return (0);
}
int main()
{
    char str[]="yousra";
    char s[]="us";
    // printf("%s\n", ft_strnstr(str, s, 2));
    printf("%s\n", strnstr(str, s, 2));
    return(0);
}