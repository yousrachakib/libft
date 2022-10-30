/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:25:52 by yochakib          #+#    #+#             */
/*   Updated: 2022/10/19 21:05:47 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int ft_isprint(int c)
{
    if ( c >= 32 && c <= 127)
        return(1);
    return (0);
}
int main()
{
    printf("%d\n", ft_isprint(32));
    printf("%d\n", ft_isprint(32));
    return (0);
}