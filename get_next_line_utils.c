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

// void	*ft_calloc(size_t count, size_t size)
// {
// 	size_t	bytes;
// 	void	*new;
// 	size_t	i;

// 	i = 0;
// 	bytes = size * count;
// 	if (size != 0 && ((bytes / size) != count))
// 		return (NULL);
// 	new = (void *)malloc(count * size);
// 	if (!new)
// 		return (NULL);
// 	while (i < (size * count))
// 	{
// 		new = 0;
// 		i++;
// 	}
	
// 	return (new);
// }