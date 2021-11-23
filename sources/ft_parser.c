/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:53:01 by raph              #+#    #+#             */
/*   Updated: 2021/11/23 16:04:12 by gglenpoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_parser(const char *str, va_list args)
{
	int	char_printed;
	int	i;

	char_printed = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			char_printed += ft_check_format(str[i + 1], args);
			i += 2;
		}
		else
		{
			char_printed += ft_print_char(str[i]);
			i++;
		}
	}
	return (char_printed);
}
