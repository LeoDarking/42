/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_4_chiffres_combinatoire_presents.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamy-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:58:53 by ahamy-pe          #+#    #+#             */
/*   Updated: 2019/07/14 15:18:20 by ahamy-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recherche(int tableau[], int taille, int nombre)
{
	int j;

	j = 0;
	while (j < taille)
	{
		if (tableau[j] == nombre)
		{
			return (1);
		}
		j++;
	}
	return (0);
}

int	ft_4_chiffres_combinatoire_presents(int *tab)
{
	int i;
	int tab_int_deja_utilise[4];

	tab_int_deja_utilise[0] = 0;
	tab_int_deja_utilise[1] = 0;
	tab_int_deja_utilise[2] = 0;
	tab_int_deja_utilise[3] = 0;
	i = 0;
	while (i < 4)
	{
		if (!(tab[i] == 1 || tab[i] == 2 || tab[i] == 3 || tab[i] == 4))
		{
			return (0);
		}
		if (recherche(tab_int_deja_utilise, i, tab[i]) == 1)
		{
			return (0);
		}
		tab_int_deja_utilise[i] = tab[i];
		i++;
	}
	return (1);
}
