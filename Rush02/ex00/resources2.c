/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resources2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-rac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:54:17 by rabi-rac          #+#    #+#             */
/*   Updated: 2019/07/21 21:54:19 by rabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*make_str(char *str, char *buf)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = (char*)malloc(sizeof(char) * (ft_strlen(str) + ft_strlen(buf) + 1));
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	while (buf[j])
	{
		new[i + j] = buf[j];
		j++;
	}
	new[i + j] = '\0';
	free(str);
	return (new);
}

char	*read_file(char *file)
{
	int		fd;
	int		rd;
	char	*str;
	char	buf[BUF_SIZE + 1];

	str = (char*)malloc(sizeof(char));
	*str = '\0';
	fd = open(file, O_RDONLY);
	while ((rd = read(fd, buf, BUF_SIZE)))
	{
		buf[rd] = '\0';
		str = make_str(str, buf);
	}
	close(fd);
	return (str);
}

int		check_valid_file(char *file)
{
	int		fd;
	int		rd;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(file, O_RDONLY)) == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	while ((rd = read(fd, buf, BUF_SIZE)))
	{
		if (rd == -1)
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
	}
	if (close(fd) == -1)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	return (1);
}
