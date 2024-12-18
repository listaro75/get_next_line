/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:46:13 by luda-cun          #+#    #+#             */
/*   Updated: 2024/12/16 16:46:14 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	i;

	i = 0;
	new = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = *(char *)(s + i);
		i++;
	}
	new[i] = 0;
	return (new);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if ((size_t)start >= (size_t)ft_strlen(s))
		len = 0;
	else if ((size_t)start + len > (size_t)ft_strlen(s))
		len = ft_strlen(s) - start;
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = *(char *)(s + i + start);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *ptr;
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	ptr = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}