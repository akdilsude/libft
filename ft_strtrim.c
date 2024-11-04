/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakdil <sakdil@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:09:25 by sakdil            #+#    #+#             */
/*   Updated: 2024/10/29 14:10:19 by sakdil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*result;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	len = end - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, &s1[start], len);
	result[len] = '\0';
	return (result);
}
