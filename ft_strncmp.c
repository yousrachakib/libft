/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:27:47 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/17 13:06:39 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    int i;
    i = 0;
    while (i < n)
    {
        if ( str1[i] != str2[i])
            return(str1[i] - str2[i]);
        i++;
    }
   return (0);
}
int main()
{
    char tst[] = "uhzifg";
    char tst1[] = "yiuhfg";
    // printf("%d\n", ft_strncmp(tst, tst1, 7));
    printf("%d\n", strncmp(tst, tst1, 7));
    return 0;
}

