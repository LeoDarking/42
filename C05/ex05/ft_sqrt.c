/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoavec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 16:58:58 by ygoavec           #+#    #+#             */
/*   Updated: 2019/07/14 16:59:01 by ygoavec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int racine;
	int sqrt;

	racine = 1;
	sqrt = 0;
	if (nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	while (racine <= nb / 2)
	{
		sqrt = racine * racine;
		if (sqrt == nb)
			return (racine);
		racine = racine + 1;
	}
	return (0);
}
