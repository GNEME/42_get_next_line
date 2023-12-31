/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggneme <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:32:13 by ggneme            #+#    #+#             */
/*   Updated: 2022/11/08 15:33:30 by ggneme           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * MAX_FD is the number of fd (file descriptor) an os can open simultaneous. I choose 100 instead of 10240.
 * BUFFER_SIZE is the number of bytes read in the file.
 * */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define MAX_FD 100
# define BUFFER_SIZE 1337
# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
char	*get_next_line(int fd);
#endif
