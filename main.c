/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raph <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:33:17 by raph              #+#    #+#             */
/*   Updated: 2021/11/08 12:04:51 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main()
{
	int	imax = INT_MAX;
	int imin = INT_MIN;
	int	*ptr = &imax;
	char *null_str = NULL;
	unsigned int hexa = UINT_MAX;

	printf("__TEST: CHAR\n");
    printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("CHAR simple: %c\n", 'a'), printf("CHAR: %c\n", 'a'));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("CHAR null: %c\n", '\0'), printf("CHAR null: %c\n", '\0'));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("CHAR multiple spec contiguous: %c%c%c%c%c\n", 'q', 'w', 'e', 'r', 'y'), printf("CHAR multiple spec contiguous: %c%c%c%c%c\n", 'q', 'w', 'e', 'r', 'y'));

	printf("__TEST: INTEGER (i & d)\n");
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("INT max: %i et %d\n", imax, imax), printf("INT max: %i et %d\n", imax, imax));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("INT min: %i et %d\n", imin, imin), printf("INT min: %i et %d\n", imin, imin));
    printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("INT zero: %i et %d\n", 0, 0), printf("Expected: %i et %d\n", 0, 0));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("INT multiple spec contiguous: %i%i%i%i%i\n", 1, 2, 3, 4, 5), printf("INT multiple spec contiguous: %i%i%i%i%i\n", 1, 2, 3, 4, 5));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("INT multiple spec non-contiguous: %ic%ip%ia%is%i\n", 1, 10, 100, 1000, 10000), printf("INT multiple spec non-contiguous: %ic%ip%ia%is%i\n", 1, 10, 100, 1000, 10000));

	printf("__TEST: UNSIGNED INT\n");
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("UINT max: %u\n", UINT_MAX), printf("UINT max: %u\n", UINT_MAX));
    printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("UINT zero %u\n", 0), printf("UINT zero: %u\n", 0));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("UINT multiples spec contiguous: %u%u%u%u%u\n", 1, 2, 3, 4, 5), printf("UINT multiples spec contiguous: %u%u%u%u%u\n", 1, 2, 3, 4, 5));
    printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("UINT multiples spec non-contiguous: %ux%uX%uh%up%u\n", 1, 10, 100, 1000, 10000), printf("UINT multiples spec non-contiguous: %ux%uX%uh%up%u\n", 1, 10, 100, 1000, 10000));

	printf("__TEST: STRING\n");
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("STRING empty: %s\n", ""), printf("STRING empty: %s\n", ""));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("STRING one word: %s\n", "word"), printf("STRING one word: %s\n", "word"));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("STRING multiple word: %s\n", "Hello world!"), printf("STRING multiple word: %s\n", "Hello world!"));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("STRING multiple spec: %s%s%s%s\n", "Premier", "Deuxieme", "Troisieme", "Quatrieme"), printf("STRING multiple spec: %s%s%s%s\n", "Premier", "Deuxieme", "Troisieme", "Quatrieme"));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("STRING multiple spec non-contiguous: %sc%sx%sG%s\n", "1", "2", "3", "4"), printf("STRING multiple spec non-contiguous: %sc%sx%sG%s\n", "1", "2", "3", "4"));
	printf("ft_printf: %d\nprintf:%d\n\n", ft_printf("STRING null: %s\n", null_str), printf("STRING null: %s\n", null_str));
	
	printf("__TEST: HEXA\n");
	printf("__LOWER:\n");
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA 0x0 test: %x\n", 0x0155), printf("HEXA 0x0 test: %x\n", 0x0155));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA max: %x\n", hexa), printf("HEXA max: %x\n", hexa));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA zero value: %x\n", 0), printf("HEXA zero value: %x\n", 0));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA deci value: %x\n", 10), printf("HEXA zero value: %x\n", 10));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA hexa value: %x\n", 16), printf("HEXA hexa value: %x\n", 16));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA negative value: %x\n", -1), printf("HEXA negative value: %x\n", -1));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA multiple spec: %x%x%x%x\n", 0, 1, 2, 3), printf("HEXA multiple spec: %x%x%x%x\n", 0, 1, 2 ,3));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA multiple spec non-contiguous: %xX%xc%xp%x\n", 0, 1, 2, 3), printf("HEXA multiple spec non-contiguous: %xX%xc%xp%x\n", 0, 1, 2, 3));

	printf("__UPPER:\n");
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA 0x0 test: %X\n", 0x0155), printf("HEXA 0x0 test: %X\n", 0x0155));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA max: %X\n", hexa), printf("HEXA max: %X\n", hexa));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA zero value: %X\n", 0), printf("HEXA zero value: %X\n", 0));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA deci value: %X\n", 10), printf("HEXA deci value: %X\n", 10));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA hexa value: %X\n", 16), printf("HEXA hexa value: %X\n", 16));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA negative value: %X\n", -1), printf("HEXA negative value: %X\n", -1));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA multiple spec: %X%X%X%X\n", 0, 1, 2, 3), printf("HEXA multiple spec: %X%X%X%X\n", 0, 1, 2 ,3));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("HEXA multiple spec non-contiguous: %Xx%Xc%Xp%X\n", 0, 1, 2, 3), printf("HEXA multiple spec non-contiguous: %Xx%Xc%Xp%X\n", 0, 1, 2, 3));

	printf("__TEST: POINTER\n");
    printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("PTR simple: %p\n", &imax), printf("PTR simple: %p\n", &imax));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("PTR double check: %p to %p\n", &imax, &ptr), printf("PTR double check: %p to %p\n", &imax, &ptr));

	printf("__TEST: PERCENT\n");
    printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("PCENT simple: %%\n"), printf("PCENT simple: %%\n"));
    printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("PCENT multiple (10): %%%%%%%%%%\n"), printf("PCENT multiple (10): %%%%%%%%%%\n"));
	printf("ft_printf:%d\nprintf:%d\n\n", ft_printf("PCENT multiple spec non-contiguous: %%c%%s%%p%%x%%X\n"), printf("PCENT multiple spec non contiguous: %%c%%s%%p%%x%%X\n"));

	return (0);
}
// need check 0x0 comme valeur pour hexa
