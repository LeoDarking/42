/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoavec <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:40:18 by ygoavec           #+#    #+#             */
/*   Updated: 2019/07/06 11:40:22 by ygoavec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_top(int x)
{
	int w;

	w = 0;
	if (x == 1)
		ft_putchar('/');
	else if (x == 2)
	{
		ft_putchar('/');
		ft_putchar(92);
	}
	else
	{
		ft_putchar('/');
		while (w != x - 2)
		{
			ft_putchar('*');
			w++;
		}
		ft_putchar(92);
	}
	ft_putchar('\n');
}

void	ft_middle(int x)
{
	int w;

	w = 0;
	if (x == 1)
		ft_putchar('*');
	else if (x == 2)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
		while (w != x - 2)
		{
			ft_putchar(' ');
			w++;
		}
		ft_putchar('*');
	}
	ft_putchar('\n');
}

void	ft_down(int x)
{
	int w;

	w = 0;
	if (x == 1)
		ft_putchar(92);
	else if (x == 2)
	{
		ft_putchar(92);
		ft_putchar('/');
	}
	else
	{
		ft_putchar(92);
		while (w != x - 2)
		{
			ft_putchar('*');
			w++;
		}
		ft_putchar('/');
	}
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	int z;

	z = 0;
	if (y == 1)
		ft_top(x);
	else if (y == 2)
	{
		ft_top(x);
		ft_down(x);
	}
	else
	{
		ft_top(x);
		while (z != y-2)
		{
			ft_middle(x);
			z++;
		}	
		ft_down(x);
	}
	return 0;
}

int		main(void)
{
	rush(5,2);
	return 0;
}