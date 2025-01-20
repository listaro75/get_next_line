/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luda-cun <luda-cun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 18:48:15 by luda-cun          #+#    #+#             */
/*   Updated: 2025/01/20 19:07:17 by luda-cun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char *mal;
	int i;

	i = 0;
	if(fd < 0)
		return(NULL);
	mal = malloc(sizeof(char)*5+1);
	while (i++ < 4)
		mal[i] = '0';
	return(mal);
}