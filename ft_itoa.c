/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elliech <elliech@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 13:43:32 by elliech           #+#    #+#             */
/*   Updated: 2022/10/30 19:22:49 by elliech          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int n) // count len of the string
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static void	ft_copy(char *p, int n, int len) // 
{
	p[len] = 0;
	while (len > 0)
	{
		len--;
		p[len] = n % 10 + 48;
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;

	if (n == -2147483648) // hard code xd
		return (ft_strdup("-2147483648"));
	if (n == 0) // hard code xp
		return (ft_strdup("0"));
	else if (n < 0)
	{
		n = n * -1; 
		len = ft_count(n) + 1; 
		p = malloc (len + 1 * sizeof(char));
		if (!p)
			return (NULL);
		ft_copy(p, n, len);
		p[0] = '-';
		return (p);
	}
	else
	{
		len = ft_count(n);
		p = malloc(len + 1 * sizeof(char));
		ft_copy(p, n, len);
		return (p);
	}
}
