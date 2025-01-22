/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:44:43 by luda-cun          #+#    #+#             */
/*   Updated: 2025/01/22 16:28:56 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	char	*get;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	get = get_next_line(fd); // premiere
	printf("%s", get);
	free(get);
	get = get_next_line(fd); // deuxieme
	printf("%s", get);
	free(get);
	get = get_next_line(fd); // troisieme
	printf("%s", get);
	free(get);
	get = get_next_line(fd); // quatrieme
	printf("%s", get);
	free(get);
	get = get_next_line(fd); // cinquieme
	printf("%s", get);
	free(get);
	get = get_next_line(fd); // NULL
	printf("%s", get);
	
	return (EXIT_SUCCESS);
}
