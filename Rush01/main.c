/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 15:30:41 by pcorreia          #+#    #+#             */
/*   Updated: 2019/07/14 15:41:59 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_strlen(char *str);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putstr("\"Error\"\n");
		return (0);
	}
	if (ft_strlen < 1)
	{
		ft_putstr("\"Error\"\n");
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][0] < '1' && argv[1][0] > '4')
		{
			ft_putstr("\"Error\"\n");
			return (0);
		}
		if (argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			i++;
			if (argv[1][i] == ' ' || argv[1][32])
				i++;
			else
			{
				ft_putstr("\"Error\"\n");
				return (0);
			}
		}
		return (1);
	}
}
