/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:45:00 by raph              #+#    #+#             */
/*   Updated: 2021/11/23 16:05:00 by gglenpoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	va_list		args;
	int			char_printed;
	char		*str_input;

	str_input = (char *)input;
	char_printed = 0;
	va_start(args, input);
	char_printed = ft_parser(str_input, args);
	va_end(args);
	return (char_printed);
}
