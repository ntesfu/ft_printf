#include "libftprintf.h"
#include "limits.h"

int	main()
{
	int x, res;
	char *str;

	x = 50;
	str = "nahom";
	res = ft_printf("First number: %-8c:\n", x);
	x = printf("First number: %-8c:\n", x);
	printf("len: %d: %d\n", res, x);
	
	x = printf("First string: %-15s:\n", str);
	res = ft_printf("First string: %-15s:\n", str);
	printf("len: %d: %d\n", res, x);

	res = ft_printf("num:%15d:\n",-1234);
	x = printf("num:%15d:\n",-1234);
	printf("len: %d: %d\n", res, x);

	res = ft_printf("num:%015.3d:\n",-1234);
	x = printf("num:%015.3d:\n",-1234);
	printf("len: %d: %d\n", res, x);

	res = ft_printf("num:%.d:\n",0);
	x = printf("num:%.d:\n",0);
	printf("len: %d: %d\n", res, x);

	res = ft_printf("num:%+5d:\n",0);
	x = printf("num:%+5d:\n",0);
	printf("len: %d: %d\n", res, x);

	//printf("num:%#10.3x\n", 0);
	res = printf("mem:%-20p:\n", str);
	x = printf("mem:%-20p:\n", str);
	printf("len: %d: %d\n", res, x);

	printf(":%015u:\n", -1);
	printf(":%#015x:\n", -1);
	printf(":%#015x:\n", -1);

	printf(":%15u:\n", 0);
	printf(":%#015x:\n", 0);
	printf(":%#015x:\n", 0);

	printf(":% 12.3d:\n", -4);
	ft_printf(":% 12.3d:\n", -4);

	printf(":%+12.0d:\n", 0);
	ft_printf(":%+12.0d:\n", 0);

	res = ft_printf("num:%+12d:\n", 0);
	x = printf("num:%+12d:\n", 0);
	printf("len: %d: %d\n", res, x);

	res = ft_printf("num:%015.3d:\n",-1234);
	x = printf("num:%015.3d:\n",-1234);
	

	res = printf(":%15u:\n", 0);
	x = ft_printf(":%15u:\n", 0);
	printf("len: %d: %d\n", res, x);

	res = printf(":%#015x:\n", 0);
	x = ft_printf(":%#015x:\n", 0);
	printf("len: %d: %d\n", res, x);

	res = printf(":%015.3X:\n", 0);
	x = ft_printf(":%015.3X:\n", 0);
	printf("len: %d: %d\n", res, x);

	res = printf(":%15.0u:\n", 0);
	x = ft_printf(":%15.0u:\n", 0);
	printf("len: %d: %d\n", res, x);

	res = printf(":%#015x:\n", 1234);
	x = ft_printf(":%#015x:\n", 1234);
	printf("len: %d: %d\n", res, x);

	res = printf(":%0#15.5X:\n", 1234);
	x = ft_printf(":%#015.5X:\n", 1234);
	printf("len: %d: %d\n", res, x);
	

	//From the Tester Trioupille
	res = printf(": NULL %s NULL :\n", NULL);
	x = ft_printf(": NULL %s NULL :\n", NULL);
	printf("len: %d: %d\n", res, x);

	res = printf(":%d:\n", -2147483648);
	x = ft_printf(":%d:\n", -2147483648);
	printf("len: %d: %d\n", res, x);

	res = printf(":%u:\n", -1);
	x = ft_printf(":%u:\n", -1);
	printf("len: %d: %d\n", res, x);

	res = printf(":%p:\n", 0);
	x = ft_printf(":%p:\n", 0);
	printf("len: %d: %d\n", res, x);

	res = printf(":%-2c:%-3c:\n", 0, '1');
	x = ft_printf(":%-2c:%-3c:\n", 0, '1');
	printf("len: %d: %d\n", res, x);

	res = printf(" %-1c %-2c %-3c \n", '0', 0, '1');
	x = ft_printf(" %-1c %-2c %-3c \n", '0', 0, '1');
	printf("len: %d: %d\n", res, x);

	res = printf(":%#X:\n", -1);
	x = ft_printf(":%#X:\n", -1);
	printf("len: %d: %d\n", res, x);

	res = printf(":%-11p: \n:%-12p: \n", INT_MIN, INT_MAX);
	x = ft_printf(":%-11p: \n:%-12p: \n", INT_MIN, INT_MAX);
	printf("len: %d: %d\n", res, x);

	res = printf(":% d:\n", 0);
	x = ft_printf(":% d:\n", 0);
	printf("len: %d: %d\n", res, x);

	res = printf(":% d:\n", LONG_MIN);
	x = ft_printf(":% d:\n", LONG_MIN);
	printf("len: %d: %d\n", res, x);

	res = printf(":%.3s:\n", "");
	x = ft_printf(":%.3s:\n", "");
	printf("len: %d: %d\n", res, x);

	res = printf(":%.3s:\n", "re");
	x = ft_printf(":%.3s:\n", "re");
	printf("len: %d: %d\n", res, x);





	
	
	

}
