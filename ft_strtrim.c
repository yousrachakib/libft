/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 00:52:24 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/11 20:29:10 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s1 == NULL)
		return (0);
	while (s1[i])
	{
		if (ft_check(set, s1[i]) == 1)
			i++;
		else
			break ;
	}
	j = ft_strlen(s1) - 1;
	while (j > 0)
	{
		if (ft_check(set, s1[j]) == 1)
			j--;
		else
			break ;
	}
	return (ft_substr(s1, i, (j + 1) - i));
}
// int main()
// {
//   char tst[]="";
//   char sep[]="";
// 		printf("%s", ft_strtrim(tst,sep));
  
// }
