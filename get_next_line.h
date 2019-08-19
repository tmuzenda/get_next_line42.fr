/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmuzenda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 15:18:36 by tmuzenda          #+#    #+#             */
/*   Updated: 2019/08/13 15:24:00 by tmuzenda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 36

# include "sys/types.h"
# include "sys/stat.h"
# include "fcntl.h"
# include "libft/libft.h"

int	ft_new_line(char **s, char **line, int fd, int ret);
int get_next_line(const int fd, char **line);

#endif
