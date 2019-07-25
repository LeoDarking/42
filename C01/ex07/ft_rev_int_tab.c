/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoavec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:29:11 by ygoavec           #+#    #+#             */
/*   Updated: 2019/07/07 19:50:31 by ygoavec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int buff;
	int d;
	int f;

	d = 0;
	f = size - 1;
	while (d < f)
	{
		buff = tab[d];
		tab[d] = tab[f];
		tab[f] = buff;
		d++;
		f--;
	}
}
