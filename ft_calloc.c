/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:50:05 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/17 18:55:52 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void ft_bzero(void *s, size_t n);

void *ft_calloc(size_t count, size_t size)//1st arg (number of blocks), 2nd arg size of each block
{


    char *ptr;

    ptr = (char *) malloc(count* sizeof(size));
    ft_bzero(ptr, count);
    return(ptr);
 }
int main()
{
    int i = 0;
    char *str;
    str = ft_calloc(4, 1);
    
       while (i < 5)
        {
            printf("%d\n", str[i]);
            i++;
        }
}