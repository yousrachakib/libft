/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:06:57 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/18 23:31:31 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    size_t j;
    size_t len;
    char *ptr;
    
    len = (strlen(s1) + strlen(s2)) + 1;
    if (s1 == 0 || s2 == 0)
        return(0);
    ptr = malloc ((len) * sizeof(char));
    if (ptr == 0)
        return(0);
    i = 0;
    while (i < strlen(s1))
    {
        ptr[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < strlen(s2))
    {
        ptr[i + j] = s2[j];
        j++;
    }
    ptr[i + j] = '\0';
    return(0); 
}
int main()
{
    char s1[]="yousra";
    char s2[]="chakib";
    
    printf("%s\n",ft_strjoin(s1,s2));
    return 0;
}