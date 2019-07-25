/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcorreia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 14:40:16 by pcorreia          #+#    #+#             */
/*   Updated: 2019/07/14 15:44:08 by pcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	arg_to_up(char *str)
{
	int i;
	int j;
	char up[5];

	i = 0;
	j = 0;
	while (str[i] && i <= 7)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			up[j] = str[i];
			j++;
		}
		i++;
	}
	return (up);
}

void	arg_to_down(char *str)
{
	int i;
	int j;
	char down[5];

	i = 8;
	j = 0;
	while (str[i] && i <= 15)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			down[j] = str[i];
			j++;
		}
		i++;
	}
	return (down);
}
	
void	arg_to_left(char *str)
{
	int i;
	int j;
	char left[5];

	i = 16;
	j = 0;
	while (str[i] && i <= 23)
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			left[j] = str[i];
			j++;
		}
		i++;
	}
	return (left);
}

void	arg_to_right(char *str)
{
	int i;
	int j;
	char right[5];

	i = 24;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			right[j] = str[1][i];
			j++;
		}
		i++;
	}
	return (right);
}

void	aff_tab(char *up, char *down, char *left, char *right)
{
	char row1[4];
	char row2[4];
	char row3[4];
	char row4[4];
	int i;

	i = 0;
	while (i < 4)
	{
		if (left[0] == '4')
			row1 == "1234";
		if (left[1] == '4')
			row2 == "1234";
		if (left[2] == '4')
			row3 == "1234";
		if (left[3] == '4')
			row4 == "1234";
		if (right[0] == '4');
			row1 == "4321";
		if (right[1] == '4');
			row2 == "4321";
		if (right[2] == '4');
			row3 == "4321";
		if (right[3] == '4');
			row4 == "4321";
		if (up[0] == '4')
		{
			row1[0] == '1';
			row2[0] == '2';
			row3[0] == '3';
			row4[0] == '4';
		}
		if (up[1] == '4')
		{
			row1[1] == '1';
			row2[1] == '2';
			row3[1] == '3';
			row4[1] == '4';
		}
		if (up[2] == '4')
		{
			row1[2] == '1';
			row2[2] == '2';
			row3[2] == '3';
			row4[2] == '4';
		}
		if (up[3] == '4')
		{
			row1[3] == '1';
			row2[3] == '2';
			row3[3] == '3';
			row4[3] == '4';
		}
		if (down[0] == '4')
		{
			row1[0] == '4';
			row2[0] == '3';
			row3[0] == '2';
			row4[0] == '1';
		}
		if (down[1] == '4')
		{
			row1[1] == '4';
			row2[1] == '3';
			row3[1] == '2';
			row4[1] == '1';
		}
		if (down[2] == '4')
		{
			row1[2] == '4';
			row2[2] == '3';
			row3[2] == '2';
			row4[2] == '1';
		}
		if (down[3] == '4')
		{
			row1[3] == '4';
			row2[3] == '3';
			row3[3] == '2';
			row4[3] == '1';
		}

	ft_putstr(row1);
	ft_putstr(row2);
	ft_putstr(row3);
	ft_putstr(row4);
}

void	combinaisons(char *tab)
{
	char tab[24];

	tab[0] == "1234";
	tab[1] == "1243";
	tab[2] == "1324";
	tab[3] == "1342";
	tab[4] == "1423";
	tab[5] == "1432";
	tab[6] == "2134";
	tab[7] == "2143";
	tab[8] == "2314";
	tab[9] == "2341";
	tab[10] == "2413";
	tab[11] == "2431";
	tab[12] == "3124";
	tab[13] == "3142";
	tab[14] == "3214";
	tab[15] == "3241";
	tab[16] == "3412";
	tab[17] == "3421";
	tab[18] == "4123";
	tab[19] == "4132";
	tab[20] == "4213";
	tab[21] == "4231";
	tab[22] == "4312";
	tab[23] == "4321";
}
