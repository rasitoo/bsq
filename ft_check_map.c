/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:26:15 by rtapiado          #+#    #+#             */
/*   Updated: 2025/07/29 20:27:01 by rtapiado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_check_signs(char *signs)
{
	int	i;
	int	j;

	i = 0;
	while (signs[i] != '\0')
	{
		j = i;
		while (signs[j] != '\0')
		{
			if (signs[i] == signs [++j])
				return (1);
		}
		i++;
	}
	return (0);
}
