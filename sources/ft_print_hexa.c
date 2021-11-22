/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:12:05 by raph              #+#    #+#             */
/*   Updated: 2021/11/04 14:01:12 by raph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../ft_printf.h"

static int	ull_len(unsigned long long int nb, int len)
{
	while (nb / 16 != 0)
	{
		len++;
		return (ull_len(nb / 16, len));
	}
	len++;
	return (len);
}

static void	convert_hexa(unsigned long long int nb, char *hexa, int len)
{
	int						base;
	unsigned long long int	tmp;

	base = 16;
	while (nb != 0)
	{
		tmp = nb / base;
		if ((nb % base) < 10)
			hexa[len - 1] = (nb % base) + 48;
		else
			hexa[len - 1] = (nb % base) + 55;
		nb = tmp;
		len--;
	}
}

int	ft_print_hexa(unsigned long long int nb, char case_sensi)
{
	int		char_printed;
	int		len;
	char	*hexa;

	char_printed = 0;
	len = 0;
	len = ull_len(nb, len);
	if (nb == 0)
		hexa = ft_strdup("0");
	else
		hexa = malloc(sizeof(char) * len + 1);
	if (hexa == NULL)
		return (0);
	hexa[len] = '\0';
	convert_hexa(nb, hexa, len);
	if (case_sensi == 'x')
		hexa = ft_str_tolower(hexa);
	char_printed += ft_print_string(hexa);
	free(hexa);
	return (char_printed);
}
