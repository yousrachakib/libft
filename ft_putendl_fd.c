/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:02:21 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/09 21:10:55 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, strlen(s));
		write(fd, "\n", 1);
	}
}

/* int main()
{
    int fd;
    fd = open("test", O_RDWR );
    ft_putendl_fd("yousra", fd);
}*/
