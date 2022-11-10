/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subsstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yochakib <yochakib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:30:37 by yochakib          #+#    #+#             */
/*   Updated: 2022/11/09 21:52:37 by yochakib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	newstart;

	i = 0;
	newstart = (size_t)start;
	if (s == 0)
		return (NULL);
	ptr = malloc ((len + 1) * sizeof(char));
	if (ptr == 0)
		return (NULL);
	while (i < len && newstart < strlen(s))
	{
		ptr[i] = s[newstart + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* int main()
{
    char res[]="";
    printf("%s\n",ft_substr(res,2,0));
    return(0);
} */
