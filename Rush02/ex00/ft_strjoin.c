/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-rac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:53:24 by rabi-rac          #+#    #+#             */
/*   Updated: 2019/07/21 21:53:26 by rabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		charnb(int size, char **strs, char *sep)
{
	int i;
	int j;
	int charnb;

	i = 0;
	charnb = 0;
	if (strs == NULL || sep == NULL || size < 0)
		return (0);
	while (i < size && strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			charnb++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	return (charnb + (size - 1) * i);
}

char	*create_str(char *res, int size, char **strs, char *sep)
{
	int i;
	int j;
	int pos;

	i = -1;
	pos = 0;
	while (++i < size && strs[i])
	{
		j = -1;
		while (strs[i][++j])
			res[j + pos] = strs[i][j];
		pos += j;
		j = -1;
		if (i < size - 1)
		{
			while (sep[++j])
				res[j + pos] = sep[j];
			pos += j;
		}
	}
	res[pos] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;

	if (size == 0)
	{
		res = (char*)malloc(sizeof(char));
		res[0] = '\0';
		return (res);
	}
	if (charnb(size, strs, sep) <= 0)
		return (NULL);
	if (!(res = (char*)malloc(sizeof(char) * (charnb(size, strs, sep) + 1))))
		return (NULL);
	res = create_str(res, size, strs, sep);
	return (res);
}
