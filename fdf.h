/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakobaya <hakobaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:01:00 by hakobaya          #+#    #+#             */
/*   Updated: 2023/11/10 20:22:32 by hakobaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include "libft/libft.h"

//external functions
//open, close, read, write, malloc, free, perror, strerror, exit
//"-lm compiler option"でコンパイルする
//MiniLibXについて調べる(https://gontjarow.github.io/MiniLibX/)

typedef	struct FdF {
	int		width;
	int		height;
	int		**z_matrix;
	int		zoom;
	int		color;
	int		shift_x;
	int		shift_y;
	float	rotation;
	void	mlx_ptr;
	void	*win_ptr;
}

#endif