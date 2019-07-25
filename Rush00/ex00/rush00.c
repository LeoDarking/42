/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpanneau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 12:36:23 by jpanneau          #+#    #+#             */
/*   Updated: 2019/07/06 16:36:40 by jpanneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, char first, char mid)
{
	int comptx;

	comptx = 1;
	while (comptx <= x)
	{
		if (comptx == 1 || comptx == x)
		{
			ft_putchar(first);
		}
		else
		{
			ft_putchar(mid);
		}
		comptx++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int compty;

	compty = 1;
	if (x > 0 && y > 0)
	{
		while (compty <= y)
		{
			if (compty == 1 || compty == y)
			{
				ft_print(x, 'o', '-');
			}
			else
			{
				ft_print(x, '|', ' ');
			}
			compty++;
		}
	}
}
