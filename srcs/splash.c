/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   splash.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-figu <mde-figu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:36:01 by mde-figu          #+#    #+#             */
/*   Updated: 2021/07/15 18:47:36 by mde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/fdf.h"

void	splash(void)
{
	char	buf[CHUNK];
	char	*filename;
	char	*str;
	int		fd;
	size_t	nread;

	filename = "srcs/splash.txt";
	fd = open(filename, O_RDONLY);
	if (fd)
	{
		while ((nread = fread(buf, 1, sizeof buf, fd)) > 0)
			write(1, buf, nread);
	}
	close(fd);
}
