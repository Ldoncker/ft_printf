#include "printf.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int count = 0;
	int count1 = 0;
	char a = 's';
	char *str = "Lorai";
	int d = -42;  /* test with negatif number -42*/
	unsigned int u = 247;
	/*unsigned int u = 2999483647;*/
	unsigned int x = 2999483647;
	unsigned int X = 47269;
	int O = 0;

	printf("\033[3;2m---------warning------------\033[0;0m\n");

	count = printf("%2.9p\n", 1234);
    count1 = ft_printf("%2.9p\n", 1234);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%.5p\n", 0);
    count1 = ft_printf("%.5p\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m \n\n%d\n%d\n", count, count1);

	count = printf("%.0psim\n", 0);
    count1 = ft_printf("%.0psim\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0\n\n%d\n%d\n", count, count1);

	count = printf("%04.3s%-7.4s\n", "hello", "world");
    count1 = ft_printf("%04.3s%-7.4s\n", "hello", "world");
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%021s\n", NULL);
    count1 = ft_printf("%021s\n", NULL);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%5c|\n", '\0');
    count1 = ft_printf("|%5c|\n", '\0');
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%c|\n", '\0');
    count1 = ft_printf("|%c|\n", '\0');
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	/*warning*/

	count = printf("%2.9p\n", 1234);
    count1 = ft_printf("%2.9p\n", 1234);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%.5p", 0);
    count1 = ft_printf("%.5p", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%.0p", 0);
    count1 = ft_printf("%.0p", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%04.3s%-7.4s", "hello", "world");
    count1 = ft_printf("%04.3s%-7.4s", "hello", "world");
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%021s", NULL);
    count1 = ft_printf("%021s", NULL);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%05c", '\0');
    count1 = ft_printf("%05c", '\0');
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%05c", 'a');
    count1 = ft_printf("%05c", 'a');
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%.0p, %.p", 0, 0);
    count1 = ft_printf("%.0p, %.p", 0, 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%.5p", 0);
    count1 = ft_printf("%.5p", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%2.9p", 1234);
    count1 = ft_printf("%2.9p", 1234);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%2.9p", 1234567);
    count1 = ft_printf("%2.9p", 1234567);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%.p, %.0p", 0, 0);
    count1 = ft_printf("%.p, %.0p", 0, 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%x\n", -2147483648);
    count1 = ft_printf("%x\n", -2147483648);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%015p\n", NULL);
    count1 = ft_printf("%015p\n", NULL);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%010c", 't');
    count1 = ft_printf("%010c", 't');
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
    count1 = ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
    count1 = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%-ld\n",-2147483648);
    count1 = ft_printf("%-d\n",-2147483647 -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%-100d\n",-2147483647 -1);;
    count1 = ft_printf("%-100d\n",-2147483647 -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%-100d\n",-2147483647);
    count1 = ft_printf("%-100d\n",-2147483647);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%100d\n",-2147483647);
    count1 = ft_printf("%100d\n",-2147483647);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*x %*X %*i %*u\n", 10, 547, 1, 300, 100, -55, 1, -60);
	count1 = ft_printf("%*x %*X %*i %*u\n", 10, 547, 1, 300, 100, -55, 1, -60);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*s %*x %*X %*i %*u\n", 1, "hey", 10, 547, 1, 300, 100, -55, 1, -60);
	count1 = ft_printf("%*s %*x %*X %*i %*u\n", 1, "hey", 10, 547, 1, 300, 100, -55, 1, -60);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("ultimate4 %*.*x %*.*X\n", 1, 50, 100, 1, 0, 10);
    count1 = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 100, 1, 0, 10);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("ultimate2 %*d\n", 1, 5000);
    count1 = ft_printf("ultimate2 %*d\n", 1, 5000);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*s\n", 1, "hey");
	count1 = ft_printf("%*s\n", 1, "hey");
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*x\n", 10, 54700);
	count1 = ft_printf("%*x\n", 10, 54700);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*X\n", 1, 300);
	count1 = ft_printf("%*X\n", 1, 300);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*i\n", 10000, -55);
	count1 = ft_printf("%*i\n", 10000, -55);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*u\n", 1, -60);
	count1 = ft_printf("%*u\n", 1, -60);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("[%-c]\n", 0);
	count1 = ft_printf("[%-c]\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("[%-5c]\n", 0);
	count1 = ft_printf("[%-5c]\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("\n|%50c|\n\n", 0);
	count1 = ft_printf("\n|%50c|\n\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("\n|%-5.p|\n\n", NULL);
	count1 = ft_printf("\n|%-5.p|\n\n", NULL);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%0-10.5d\n", -216);
	count1 = ft_printf("%0-10.5d\n", -216);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%*.*d|\n", 15, 0, INT_MIN);
	count1 = ft_printf("|%*.*d|\n", 15, 0, INT_MIN);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*.*d\n", 15, 4, -2147);
	count1 = ft_printf("%*.*d\n", 15, 4, -2147);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*.*d\n", 15, 3, -2147);
	count1 = ft_printf("%*.*d\n", 15, 3, -2147);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%*.*X|\n", -9, 0, 0);
	count1 = ft_printf("|%*.*X|\n", -9, 0, 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%8.3d\n", -8473);
	count1 = ft_printf("%8.3d\n", -8473);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%10.5d|\n", INT_MAX);
	count1 = ft_printf("|%10.5d|\n", INT_MAX);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%04i|\n", -4825);
	count1 = ft_printf("|%04i|\n", -4825);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%-3.3i|\n", -8462);
	count1 = ft_printf("|%-3.3i|\n", -8462);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%04d|\n", -532);
	count1 = ft_printf("|%04d|\n", -532);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%04d|\n", -4825);
	count1 = ft_printf("|%04d|\n", -4825);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%-8.3d|\n", -8473);
	count1 = ft_printf("|%-8.3d|\n", -8473);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("|%x|\n", 0);
	count1 = ft_printf("|%x|\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.2i\n", 0);
	count1 = ft_printf("%01.2i\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10i\n", 0);
	count1 = ft_printf("%01.10i\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.2i\n", -1);
	count1 = ft_printf("%01.2i\n", -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10i\ns", -1);
	count1 = ft_printf("%01.10i\ns", -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.2d\n", 0);
	count1 = ft_printf("%01.2d\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10d\n", 0);
	count1 = ft_printf("%01.10d\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.2d\n", -1);
	count1 = ft_printf("%01.2d\n", -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10d\n", -1);
	count1 = ft_printf("%01.10d\n", -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.2u\n", 0);
	count1 = ft_printf("%01.2u\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10u\n", 0);
	count1 = ft_printf("%01.10u\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.2x\n", 0);
	count1 = ft_printf("%01.2x\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10x\n", -1);
	count1 = ft_printf("%01.10x\n", -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10x\n", -1);
	count1 = ft_printf("%01.10x\n", -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10x\n", -1);
	count1 = ft_printf("%01.10x\n", -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.2X\n", 0);
	count1 = ft_printf("%01.2X\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10X\n", 0);
	count1 = ft_printf("%01.10X\n", 0);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%01.10X\n", -1);
	count1 = ft_printf("%01.10X\n", -1);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	/*count = printf("%*d\n", INT_MIN);
	count1 = ft_printf("%*d\n", INT_MIN);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%*d\n", INT_MAX);
	count1 = ft_printf("%*d\n", INT_MAX);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);*/

	/*count = printf("%.s\n", 42);
	count1 = ft_printf("%.s\n", 42);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);*/

	count = printf("%0-8.5i", 34);
	count1 = ft_printf("%0-8.5i", 34);
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	count = printf("%020.5s", "Hallo heimur");
    count1 = ft_printf("%020.5s", "Hallo heimur");
	if (count == count1)
		printf("\033[3;92mReturn value : OK\033[0;0m\n");
	else
		printf("\033[1;31mFALSE\033[0;0m : \t%d != %d\n", count, count1);

	system("leaks a.out");

    return(0);
}
