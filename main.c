/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:47:37 by luda-cun          #+#    #+#             */
/*   Updated: 2025/01/20 19:02:58 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
	int fd;
	char *ret;

	fd = open("my_fd.txt", O_RDONLY);
	ret = get_next_line(fd);
	printf("%s",ret);
	close(fd);
}