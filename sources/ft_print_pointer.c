/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:06:36 by raph              #+#    #+#             */
/*   Updated: 2021/11/04 13:56:20 by raph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int			char_printed;
	uintptr_t	int_value;

	int_value = (uintptr_t)(void *)ptr;
	char_printed = ft_print_char('0');
	char_printed += ft_print_char('x');
	char_printed += ft_print_hexa(int_value, 'x');
	return (char_printed);
}
