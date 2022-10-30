/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:14:07 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/14 15:03:16 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_atoi(const char *str)
{
    int i;
    int s;
    int r;
    
    i = 0;
    s = 1;
    r = 0;
    while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' )
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            s *= -1;
        i++;
    }
    while (str[i] && isdigit(str[i]))
    {
        r = r * 10 + (str[i] - 48);
        i++;
    }
    return(r*s);
}
int main ()
{
    printf("%d\n", ft_atoi("         ---+125kj465"));
    return 0;
}