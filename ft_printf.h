/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:44:48 by raph              #+#    #+#             */
/*   Updated: 2021/11/04 14:03:17 by raph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *input, ...);
int		ft_parser(const char *str, va_list args);
int		ft_check_format_specifiers(char c, va_list args);
int		ft_print_char(char c);
int		ft_print_string(char *str);
int		ft_print_int(int i);
int		ft_print_pcent(void);
int		ft_print_uint(unsigned int nb);
int		ft_print_hexa(unsigned long long int nb, char case_sensi);
int		ft_print_pointer(void *ptr);
char	*ft_str_tolower(char *str);
#endif
