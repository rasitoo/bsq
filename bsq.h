/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtapiado <rtapiado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:56:31 by dsanz-ro          #+#    #+#             */
/*   Updated: 2025/07/29 20:28:43 by rtapiado         ###   ########.fr       */
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

int		ft_extract_signs(char *line, char *signs);
char	*ft_extract_first_line(char *argv);

int		ft_check_signs(char *signs);
#endif