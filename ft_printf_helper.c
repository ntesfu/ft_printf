#include "libftprintf.h"

/*prints character: concerning flags: - & width*/
int	print_char(int c, int flags[])
{
	int	len;

	len = 0;
	if (flags[0] > 0)
	{
		ft_putchar_fd(c, 1 + (0 * len++));
		while(len < flags[6])
			write(1, " ", 1 + (0 * len++));
	}
	else
	{
		while(len < flags[6] - 1)
			write(1, " ", 1 + (0 * len++));
		ft_putchar_fd(c, 1 + (0 * len++));
	}
	return (len);
}
