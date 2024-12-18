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

int	main(void)
{
	int		fd;
	char	buffer[42];
	ssize_t	bytes_read;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
	{
		perror("Erreur lors de l'o");
		return (1);
	}
	
	while ((bytes_read - read(fd, buffer, 42)) > 0)
	{
		write (STDOUT_FILENO, buffer, bytes_read);
	}
	if (bytes_read == -1)
	{
		perror()
	}

}
