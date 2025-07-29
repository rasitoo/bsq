/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_legend.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:15:33 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/29 20:16:57 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_extract_signs(char *line, char *signs)
{
	int		i;

	i = ft_strlen(line);
	signs[0] = line[i - 4];
	signs[1] = line[i - 3];
	signs[2] = line[i - 2];
	return (0);
}

char	*ft_extract_first_line(char *argv)
{
	char	*line;
	int		fd;
	int		i;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (NULL);
	line = (char *)malloc(1024);
	if (!line)
	{
		line = NULL;
		return (line);
	}
	i = 0;
	while (read(fd, &line[i], 1))
		if (line[i++] == '\n')
			break ;
	if (close(fd) == -1)
		return (NULL);
	return (line);
}
