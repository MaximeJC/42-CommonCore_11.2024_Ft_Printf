#include "include/ft_printf.h"

	/*
	? %c Single char
	? %s String
	? %p Void * pointer argument / pointer address in hexadecimal
	? %d Decimal number (base 10)
	? %i Integer (base 10)
	? %u Unsigned decimal (base 10)
	? %x Number in hexadecimal lowercase format
	? %X Number in hexadecimal uppercase format
	? %% Print a percent sign
	*/

int	main(void)
{
	int len;

	ft_printf("(%i)\n", ft_printf("----------%%c----------"));
	ft_printf("StdPrintf: ");
	len = printf("%c", 'F');
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%c", 'F'));

	ft_printf("(%i)\n", ft_printf("----------%%s----------"));
	ft_printf("StdPrintf: ");
	len = printf("%s", "Bonjour");
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%s", "Bonjour"));

	ft_printf("(%i)\n", ft_printf("----------%%p----------"));
	void *ptr = NULL;
	ft_printf("StdPrintf: ");
	len = printf("%p", ptr);
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%p", ptr));

	ft_printf("(%i)\n", ft_printf("----------%%d----------"));
	ft_printf("StdPrintf: ");
	len = printf("%d", INT_MIN);
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%d", INT_MIN));

	ft_printf("(%i)\n", ft_printf("----------%%i----------"));
	ft_printf("StdPrintf: ");
	len = printf("%i", -35415);
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%i", -35415));

	ft_printf("(%i)\n", ft_printf("----------%%u----------"));
	ft_printf("StdPrintf: ");
	len = printf("%u", UINT_MAX);
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%u", UINT_MAX));

	ft_printf("(%i)\n", ft_printf("----------%%x----------"));
	ft_printf("StdPrintf: ");
	len = printf("%x", -1);
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%x", -1));

	ft_printf("(%i)\n", ft_printf("----------%%X----------"));
	ft_printf("StdPrintf: ");
	len = printf("%X", (unsigned int)3354045406);
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%X", (unsigned int)3354045406));

	ft_printf("(%i)\n", ft_printf("----------%%%%----------"));
	ft_printf("StdPrintf: ");
	len = printf("%%");
	fflush(stdout);
	ft_printf("(%i)\nFt_Printf: ", len);
	ft_printf("(%i)\n", ft_printf("%%"));

	return (0);
}
