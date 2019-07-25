/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resources1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-rac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:54:03 by rabi-rac          #+#    #+#             */
/*   Updated: 2019/07/21 22:48:34 by rabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_is_valid_atoi(char *str)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		i++;
		c++;
	}
	if (c > 18)
	{
		ft_putstr("Error. Unsupported number.");
		return (0);
	}
	else
		return (1);
}

long	ft_atoi(char *str)
{
	long	number;
	int		i;

	number = -2;
	i = 0;
	if (!ft_is_valid_atoi(str))
		return (-3);
	if (str[i] && str[i] >= '0' && str[i] <= '9')
		number = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (i != ft_strlen(str))
		return (-2);
	return (number);
}
