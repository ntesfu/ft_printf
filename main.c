#include "libftprintf.h"

int	main()
{
	int x;

	x = 50;

	int res = ft_printf("First number: %-.34.#++++08c:\n", x);
	printf("len: %d", res);
}
