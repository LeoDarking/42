/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoavec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 15:13:50 by ygoavec           #+#    #+#             */
/*   Updated: 2019/07/20 15:13:52 by ygoavec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Essayer de modifier l'atoi pour qu'il retourne un entier, s'il a un entier */
/* avec des espaces avant ou apres (sans les '+' ; '-' ; ',') */ 
/* Si rien n'est conforme retourner '-1' */

int	ft_atoi(char *str)
{
	long int i;
	long int nbr;

	nbr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			i++;
		else
		{
			nbr = nbr * 10 + str[i] - '0';
			i++;
		}		
	}
	return (nbr);
}

#include <stdio.h>
int		main()
{
	printf("%d", ft_atoi("19465514645816455487564849464654"));
	return (0);
} 
