/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakdil <sakdil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:30:02 by sakdil            #+#    #+#             */
/*   Updated: 2024/10/29 14:09:47 by sakdil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*x;
	int				i;

	i = 0;
	x = (unsigned char *)str;
	while (x[i] != '\0')
	{
		if (x[i] == (unsigned char)c)
			return ((char *)x + i);
		i++;
	}
	if (x[i] == (unsigned char)c)
		return ((char *)x + i);
	return (NULL);
}
