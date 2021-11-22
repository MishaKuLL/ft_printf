/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 16:10:25 by raph              #+#    #+#             */
/*   Updated: 2021/11/04 13:57:40 by raph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static void	ft_putnbr_unsigned(unsigned int nb)
{
	if (nb > 9)
		ft_putnbr_unsigned(nb / 10);
	ft_print_char(nb % 10 + 48);
}

int	ft_print_uint(unsigned int nb)
{
	int				char_printed;
	unsigned int	save;

	save = nb;
	char_printed = 0;
	while (save > 9)
	{
		save = save / 10;
		char_printed++;
	}
	ft_putnbr_unsigned(nb);
	return (char_printed + 1);
}
