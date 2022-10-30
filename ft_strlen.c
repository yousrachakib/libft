/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:36:00 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/12 12:49:50 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_strlen(const char *s)
{
    int i;
    i = 0;
    if (s)
    {
        while (s[i] != '\0')
        i++;
    }
    return (i);
}
int main()
{
    char str[]= "test";
    printf("%d\n", ft_strlen(str));
}