/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:56:01 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/20 22:23:13 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
void ft_bzero(void *s, size_t n) //Erases the data in the "n" bytes of the memory starting 
// at the location pointed by "s" writing zeroes
{
    int i;
    i =0;
    char *str;
    str = (char*)s;
    while (i < n)
    {
        str[i]= 0;
        i++;
    }
}