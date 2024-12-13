/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgouraud <mgouraud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:26:40 by mgouraud          #+#    #+#             */
/*   Updated: 2024/12/02 14:50:30 by mgouraud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	/*
	? %[flags][width][.precision]specifier

	? Flags:
	? - : Justifie a gauche (droite par defaut)
	? + : Force a afficher + ou - pour les nombres
	? (espace) : Pour les nombres : si aucun chiffre, met un espace
	? # : Avec x ou X, precede la valeur par 0x ou 0X
	?	(tant que valeur different de zero)
	? 0 : Utilise des 0 initiaux pour completer les nombres au lieu d'espaces

	? Width:
	? (nombre) : Utilise x zeros initiaux pour completer les nombres
	?	au lieu d'espaces
	? * : La largeur n'est pas specifiee dans la chaine de format,
	?	mais comme un argument de valeur entiere supplementaire precedant
	?	l'argument a formater

	? Precision:
	? .(nombre) : Pour les spes d'entiers (diuxX), nombre minimum de chiffres a
	?	ecrire. SI plus court, complete par zeros initiaux.
	?	Pas tronquee si plus longue.
	? .* : La largeur n'est pas specifiee dans la chaine de format, mais comme un
	?	argument de valeur entiere supplementaire precedant l'argument a formater
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

	// printf("\n\n\n");
	// double truc = 123456789.123456789;
	// printf("%f\n", truc);
	// printf("%f", (truc - (double)((int)truc)));

	return (0);
}
