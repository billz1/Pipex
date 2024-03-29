/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:52:38 by mbartos           #+#    #+#             */
/*   Updated: 2024/01/30 11:50:24 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	char	*sub_str_first;
	size_t	i;
	size_t	length_malloc;

	if (start > ft_strlen(s))
		length_malloc = 0;
	else if (start <= ft_strlen(s) && ft_strlen(s) <= len)
		length_malloc = ft_strlen(s) - start;
	else
		length_malloc = len;
	sub_str = (char *) malloc((length_malloc + 1) * sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	sub_str_first = sub_str;
	i = 0;
	while (i < length_malloc && *(s + start + i))
	{
		*sub_str++ = *(s + start + i);
		i++;
	}
	*sub_str = '\0';
	return (sub_str_first);
}
