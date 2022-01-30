#include <stdarg.h>
#include "libft.h"
#include <stdio.h>

/*initializes the flags to 0: flags= -,0,#, ,+,width,precision*/
void	flag_initialize(int flag[])
{
	int i;

	i = -1;
	while (++i < 8)
	   	flag[i] = 0;
}

int indexof(char *str, char c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (c = str[i])
            return (i);
    }
    return (-1);
}

/*reads flags if present: flags= -,0,#, ,+,width,precision*/
int flag_format(char *str, int *pos, int flag_arr[])
{
	int		len;
	char	*flags;
    int		val;

	flags = "-0.# +";
	len = 0;
	val = 6;
	(*pos)++;
    while (str[*pos] && indexof(flags, str[*pos]) != -1 || ft_isdigit(str[*pos]))
    {
        flag_arr[indexof(str[*pos])]++;
        if (ft_isdigit(str[*pos]))
		{
			if(str[*pos] == '.')
            	val = 7;
        	while (ft_isdigit(str[++(*pos)]))
        	flag_arr[val] = flag_arr[val]*10 + str[*pos] - 48 + (0 * len++);
        	len++;
			continue;
		}		
        (*pos)++;
    }
    return (len);
}

int	va_arg_specifier(char s, va_list args, int flag[])
{
	int	len;

	if (s == 'c')
		len = printf("%c", va_arg(args, char));
	else if (s == 's')
		len = printf("%s", va_arg(args, char *));
	else if (s == 'p')
		len = printf("%p", va_arg(args, unsigned long long int));
	else if (s == 'd')
		len = printf("%d", va_arg(args, int));
	else if (s == 'i')
		len = printf("%i", va_arg(args, int));
	else if (s == 'u')
		len = printf("%u", va_arg(args, unsigned int));
	else if (s == 'x')
		len = printf("%x", va_arg(args, unsigned int));
	else if (s == 'X')
		len = printf("%X", va_arg(args, unsigned int));
	else if (s == '%')
	{
		ft_putchar_fd('%', 1);
		len++;
	}
	return (len);
}

int ft_printf(const char *str, ...)
{
    va_list args;
    int     pos;
    int     len;
    int     flag[8];

    pos = 0;
    len = 0;
    flag_initialize(flag)
    va_start(args, str);
    while (str[pos])
    {
        if (str[pos] == '%')
        {
            len += flag_format(str, &pos);
            len += va_arg_specifier(str[pos], args, flag);
        }
        else
        {
            ft_putchar_fd(str[pos], 1);
            len++;
        }
		pos++;
    }
}
