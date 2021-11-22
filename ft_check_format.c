/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_format_specifiers.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:27:43 by raph              #+#    #+#             */
/*   Updated: 2021/11/04 14:08:15 by raph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_check_format_specifiers(char c, va_list args)
{
	int	char_printed;

	char_printed = 0;
	if (c == 'c')
		char_printed = ft_print_char(va_arg(args, int));
	if (c == 's')
		char_printed = ft_print_string(va_arg(args, char *));
	if (c == 'i' || c == 'd')
		char_printed = ft_print_int(va_arg(args, int));
	if (c == '%')
		char_printed = ft_print_pcent();
	if (c == 'u')
		char_printed = ft_print_uint(va_arg(args, unsigned int));
	if (c == 'x' || c == 'X')
		char_printed = ft_print_hexa(va_arg(args, unsigned int), c);
	if (c == 'p')
		char_printed = ft_print_pointer(va_arg(args, void *));
	return (char_printed);
}
