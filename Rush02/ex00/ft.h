/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabi-rac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/21 21:53:03 by rabi-rac          #+#    #+#             */
/*   Updated: 2019/07/21 21:53:05 by rabi-rac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

typedef struct	s_point
{
	long	nb;
	char	*written_nb;
}				t_point;

void			ft_putchar(char c);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
long			ft_atoi(char *str);
char			*make_str(char *str, char *buf);
char			*read_file(char *file);
int				check_valid_file(char *file);
char			**ft_split(char *str, char *charset);
char			*ft_strjoin(int size, char **strs, char *sep);
int				check_dict_format(char **str);
char			**create_temp_tab(char *str);
char			**fill_temp_tab(char *str);
t_point			*create_struct_tab(char **str);
int				check_valid_tab(t_point *tab);
void			ft_convert(long nb, t_point *tab, int one);
void			ft_recursive_convert(long nb, t_point *tab, long p);
void			ft_free(char **strs);
void			ft_free_list(t_point *tab);

# define BUF_SIZE 10

#endif
