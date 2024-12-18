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
	int fd;
	char reserve[BUFFER_SIZE];
	int nb_byte;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
		return (1);
	nb_byte = read(fd,reserve,5);
	reserve[5] = 0;
	printf("%s",reserve);
	close(fd);
	return (0);
}
