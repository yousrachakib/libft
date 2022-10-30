/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:52:19 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/17 19:02:19 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char *strdup(const char *s1)
{
    char *ptr;
    int i;
    int len;
    
    i = 0;
    len = ft_strlen(s1);
    ptr = (char *)malloc(sizeof(char) * len + 1);
    while (i < len)
    {
        ptr[i] = s1[i];
        i++;
    }
    ptr[i] = '\0';
    return(ptr); 
}
