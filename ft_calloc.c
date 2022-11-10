/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:50:05 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/09 14:51:51 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
//     int i = 0;
//     char *str;
//     str = calloc(SIZE_MAX, SIZE_MAX);
//        while (i < 5)
//         {
//             printf("%d\n", str[i]);
//             i++;
//         }
// } 
