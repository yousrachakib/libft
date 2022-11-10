/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:13:26 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/09 21:14:02 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (0 <= n && n <= 9)
	{
		ft_putchar_fd((n + '0'), fd);
	}
	else if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putnbr_fd((n % 10), fd);
	}
	else
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd((n * -1), fd);
	}
}

/* int main()
{
    int fd;
    fd = open("test", O_RDWR | O_CREAT);
    ft_putnbr_fd(-214, fd);
    return 0;
} */
