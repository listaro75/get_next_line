/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:45:21 by luda-cun          #+#    #+#             */
/*   Updated: 2024/12/16 17:05:39 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free_stack(char *stack, char *buffer)
{
	char	*stack2;

	stack2 = ft_strjoin(stack, buffer);
	free(stack);
	return (stack2);
}

char	*ft_new_reserv(char *reserve)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = ft_strlen(reserve);
	while (reserve[i] != '\n' && reserve[i] != 0)
		i++;
	new = malloc(sizeof(char) * (j - i + 1));
	if (!new)
		return(NULL);
	j = 0;
	if (reserve[i] == '\n')
	{
		i++;
		while (reserve[i + j])
		{
			new[j] = reserve[i + j];
			j++;
		}
	}
	else
	{
		while (reserve[i + j])
		{
			new[j] = reserve[i + j];
			j++;
		}
	}
	new[j] = 0;
	free(reserve);
	return (new);
}

char	*ft_check_fd(int fd, char *stock)
{
	char	*buffer;
	int		bytes;

	if (!stock)
	{
		stock = malloc(1);
		stock[0] = 0;
	}
	bytes = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return(free(stock), NULL);
	while (bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == -1)
			return (free(stock), free(buffer), NULL);
		buffer[bytes] = 0;
		stock = ft_free_stack(stock, buffer);
		if (ft_strchr(stock, '\n'))
			break ;
	}
	free(buffer);
	return (stock);
}
char	*ft_new_line(char *reserve)
{
	int		i;
	char	*ret;

	ret = NULL;
	i = 0;
	while (reserve[i] != '\n' && reserve[i])
		i++;
	if (reserve[i] == '\n')
		ret = malloc((i + 2) * sizeof(char));
	else if (reserve[i] == 0)
		ret = malloc((i + 1) * sizeof(char));
	if (!ret)
		return (free(reserve),NULL);
	i = 0;
	while (reserve[i] != '\n' && reserve[i] != 0)
	{
		ret[i] = reserve[i];
		i++;
	}
	if (reserve[i] == '\n')
	{
		ret[i] = reserve[i];
		ret[++i] = 0;
		if (reserve[i] == 0)
			free(reserve);
	}
	else
		ret[i] = 0;
	return (ret);
}

char	*get_next_line(int fd)
{
	static char	*reserve;
	char		*ret;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	reserve = ft_check_fd(fd, reserve);
	ret = ft_new_line(reserve);
	reserve = ft_new_reserv(reserve);
	return (ret);
}
