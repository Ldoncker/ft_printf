/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 12:02:27 by ldoncker          #+#    #+#             */
/*   Updated: 2020/11/29 16:03:26 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_flags
{
	int			spec;
	int			left;
	int			zero;
	int			width;
	int			star;
	int			dot;
	int			sign;
}				t_flags;

int				ft_printf(const char *s, ...);
int				ft_read_str(const char *s, va_list av);
int				ft_putchar(int c);
int				ft_putstr(char *str, int len);
int				ft_fill_width(int width, int len, int zero);
int				ft_print_c(char c, t_flags flags);
int				ft_print_s(char *s, t_flags flags);
char			*ft_itoa_base(unsigned long long nbr, int base);
char			*ft_s_tolower(char *str);
int				ft_print_p(unsigned long long nbr, t_flags flags);
int				ft_print_d(int nbr, t_flags flags);
int				ft_print_u(unsigned int nbr, t_flags flags);
int				ft_print_x(unsigned int nbr, int lower, t_flags flags);
int				ft_print_perc(t_flags flags);
t_flags			ft_flag_left(t_flags flags);
t_flags			ft_flag_width(t_flags flags, va_list av);
int				ft_flag_dot(const char *s, int i, t_flags *flags, va_list av);
t_flags			ft_flag_digit(char c, t_flags flags);
t_flags			ft_initiate_flags(void);
int				ft_specifier(int c);
int				ft_read_flags(const char *s, int i, t_flags *flags, va_list av);
int				ft_translator(int c, t_flags flags, va_list av);

#endif
