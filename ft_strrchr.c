/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakdil <sakdil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:17:28 by sakdil            #+#    #+#             */
/*   Updated: 2024/10/29 14:10:15 by sakdil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)(str + i));
	while (i >= 0)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)(str + i));
		i--;
	}
	return (NULL);
}
