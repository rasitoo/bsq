/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsanz-ro <dsanz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:56:31 by dsanz-ro          #+#    #+#             */
/*   Updated: 2025/07/30 16:17:19 by dsanz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_strlen(char *str);
int		ft_atoi(char *str);
char	*ft_create_buffer(size_t str_lgth);

int		ft_extract_signs(char *line, char *signs);
int		ft_extract_number(char *line);
char	*ft_extract_first_line(char *argv);

int		ft_check_signs(char *signs);
int		ft_check_sign_valid(char c, char *signs);
int		ft_check_lengths_signs(char *line, char *signs);
int		ft_is_line_valid(int i, char *signs, int fd, int *length);

typedef struct s_sq
{
	int	row;
	int	col;
	int	size;
}	t_sq;

typedef struct s_mapinfo
{
	char	**map;
	int		rows;
	int		cols;
	char	empty;
	char	obstacle;
}	t_mapinfo;

t_sq	find_biggest_sq(t_mapinfo info);
int		**allocate_dp(int rows, int cols);
void	free_dp(int **dp, int rows);
int		compute_cell_value(int **dp, t_mapinfo info, int i, int j);
void	update_best_sq(t_sq *best, int size, int i, int j);
int		min(int a, int b, int c);

#endif