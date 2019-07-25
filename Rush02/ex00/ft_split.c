/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-rac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:53:13 by rabi-rac          #+#    #+#             */
/*   Updated: 2019/07/21 21:53:15 by rabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_bin_str(char *str, char *charset)
{
	char	*bin;
	int		i;
	int		j;

	i = 0;
	bin = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (*(str + i))
	{
		*(bin + i) = '0';
		j = 0;
		while (*(charset + j))
		{
			if (*(str + i) == *(charset + j))
			{
				*(bin + i) = '1';
				break ;
			}
			j++;
		}
		i++;
	}
	*(bin + i) = '\0';
	return (bin);
}

int		ft_nbr_str(char *bin)
{
	int i;
	int p;
	int c;

	i = 0;
	p = 1;
	c = 0;
	while (*(bin + i))
	{
		if (*(bin + i) == '0' && p == 1)
		{
			c++;
			p = 0;
		}
		if (*(bin + i) == '1')
			p = 1;
		i++;
	}
	return (c);
}

char	**ft_len_string(int nbr_string, char *bin)
{
	int		i;
	int		j;
	int		len;
	char	**tab;

	i = 0;
	j = 0;
	len = 0;
	tab = (char**)malloc(sizeof(char*) * (nbr_string + 1));
	while (i < nbr_string)
	{
		while (*(bin + j) && *(bin + j) == '1')
			j++;
		while (*(bin + j) && *(bin + j) == '0')
		{
			len++;
			j++;
		}
		*(tab + i) = (char*)malloc(sizeof(char) * (len + 1));
		len = 0;
		i++;
	}
	*(tab + i) = NULL;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	*bin;
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	bin = ft_bin_str(str, charset);
	tab = ft_len_string(ft_nbr_str(bin), bin);
	while (i < ft_nbr_str(bin))
	{
		k = 0;
		while (*(bin + j) && *(bin + j) == '1')
			j++;
		while (*(bin + j) && *(bin + j) == '0')
		{
			*(*(tab + i) + k) = *(str + j);
			j++;
			k++;
		}
		*(*(tab + i++) + k) = '\0';
	}
	free(bin);
	return (tab);
}
