/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:41:43 by raph              #+#    #+#             */
/*   Updated: 2021/11/04 13:56:54 by raph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_print_string(char *str)
{
	int	char_printed;

	if (!str)
		str = "(null)";
	char_printed = 0;
	while (str[char_printed])
	{
		ft_putchar_fd(str[char_printed], 1);
		char_printed++;
	}
	return (char_printed);
}
