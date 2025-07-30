/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsanz-ro <dsanz-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 15:58:44 by dsanz-ro          #+#    #+#             */
/*   Updated: 2025/07/30 16:17:02 by dsanz-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

t_sq	find_biggest_sq(t_mapinfo info)
{
	t_sq		best;
	int			**dp;
	int			i;
	int			j;

	dp = allocate_dp(info.rows, info.cols);
	if (!dp)
		return ((t_sq){0, 0, 0});
	best = (t_sq){0, 0, 0};
	i = -1;
	while (++i < info.rows)
	{
		j = -1;
		while (++j < info.cols)
		{
			dp[i][j] = compute_cell_value(dp, info, i, j);
			update_best_sq(&best, dp[i][j], i, j);
		}
	}
	free_dp(dp, info.rows);
	return (best);
}