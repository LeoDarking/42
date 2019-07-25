/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoavec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 11:46:48 by ygoavec           #+#    #+#             */
/*   Updated: 2019/07/11 11:46:50 by ygoavec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i;
	int nbr;
	int signe;

	nbr = 0;
	i = 0;
	signe = 0;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\r') ||
			(str[i] == '\v') || (str[i] == ' ') || (str[i] == '\f'))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe++;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	if (signe % 2 == 1)
		return (-nbr);
	else
		return (nbr);
}
