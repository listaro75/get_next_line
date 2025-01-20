/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-12-18 13:59:36 by luda-cun          #+#    #+#             */
/*   Updated: 2024-12-18 13:59:36 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int fd;
	char *reserve;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
		return (1);

	reserve = get_next_line(fd);
	printf("%s",reserve);
	reserve = get_next_line(fd);
	printf("%s",reserve);
	reserve = get_next_line(fd);
	printf("%s",reserve);
	reserve = get_next_line(fd);
	printf("%s",reserve);
	reserve = get_next_line(fd);
	printf("%s",reserve);
	reserve = get_next_line(fd);
	printf("%s",reserve);
	free(reserve);
	return (0);
}