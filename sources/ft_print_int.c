/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 15:28:37 by raph              #+#    #+#             */
/*   Updated: 2021/11/22 16:32:51 by gglenpoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

int	ft_print_int(int i)
{
	int		char_printed;
	char	*printable_i;

	printable_i = ft_itoa(i);
	char_printed = ft_print_string(printable_i);
	free(printable_i);
	return (char_printed);
}
