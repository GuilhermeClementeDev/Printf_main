#include "ft_printf.h"
#include <stdio.h>

int main()
{
	/*// teste %d, %i, %c, %s
	int years = 22;
	int i = 2002;
	char *s = "VASCO";
	int money = -2147483648;
	char a = 'I';

	ft_printf("\nMY size :%d\n", ft_printf("%c have %d years so i was born in %i\nMy team is %s\nAnd i have %d on my bank.", a, years, i, s, money));
	printf("\nORI size :%d\n", printf("%c have %d years so i was born in %i\nMy team is %s\nAnd i have %d on my bank.", a, years, i, s, money));*/

	// testes %i
	//int test = 0x73;
	/*printf("%d\n",printf("%i%i%i\n", 0x73,1,42));
	ft_printf("%d\n",ft_printf("%i%i%i\n", 0x73,1,42));*/

	// test %u
	/*ft_printf("MY\n");
	ft_printf("%d\n", ft_printf("%u\n", -10));
	ft_printf("%d\n",ft_printf("%u\n", 10));
	ft_printf("%d\n",ft_printf("%u\n", 2147483647));
	ft_printf("ORI\n");
	printf("%d\n",printf("%u\n", -10));
	printf("%d\n",printf("%u\n", 10));
	printf("%d\n",printf("%u\n", 2147483647));*/

	// test %x
	/*ft_printf("MY\n");
	ft_printf("%d\n",ft_printf("%x\n", -78787));
	ft_printf("ORI\n");
	printf("%d\n",printf("%x\n", -78787));*/


	// %%
	/*ft_printf ("%d\n", ft_printf ("%%\n"));
	printf ("%d\n", printf ("%%\n"));*/

	// %p
	/*char *s;
	ft_printf("%d\n", ft_printf("%p \n", &s));
	printf("%d\n", printf("%p \n", &s));*/

	/*printf("%d", printf(0));
	ft_printf("%d", ft_printf(0));*/

	/*char *b = "";
	printf("%d", printf("%s",b));
	ft_printf("%d", ft_printf("%s",b));*/
}
