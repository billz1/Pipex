/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyerima <pyerima@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 16:20:21 by pyerima           #+#    #+#             */
/*   Updated: 2024/01/28 14:30:53 by pyerima          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <sys/wait.h>
# include "../libft/libft.h"
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <fcntl.h>

int		free_array(char **array);
char	**get_arr_of_paths(char **env);
char	*get_path(char *argv, char **env);
char	*strip_newline(char *str);
void	ft_read_heredoc(char *limiter);

#endif
