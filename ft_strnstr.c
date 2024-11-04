/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakdil <sakdil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:33:37 by sakdil            #+#    #+#             */
/*   Updated: 2024/10/29 14:10:17 by sakdil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] != '\0' && to_find[j] != '\0'
				&& str[i + j] == to_find[j] && (i + j) < len)
				j++;
			if (to_find[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}
