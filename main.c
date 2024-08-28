#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int a,b,c,d,e,f,g,h;

	ft_printf("\n*** Solamente un caracter ***\n");
	a = ft_printf("%c\n", 'a');
	d = printf("%c\n", 'a');
	b = ft_printf("%c\n", '\0');
	e = printf("%c\n", '\0');
	c = ft_printf("%c\n", 127);
	f = printf("%c\n", 127);

	ft_printf("Longitudes ft_printf >> %d %d %d\n", a,b,c);
	ft_printf("Longitudes    printf >> %d %d %d\n", d,e,f);

	ft_printf("\n*** Una string ***\n");

	a = ft_printf("%s\n", "teste");
	d = printf("%s\n", "teste");
	b = ft_printf("%s\n", '\0');
	e = printf("%s\n", '\0');
	c = ft_printf("%s\n", NULL);
	f = printf("%s\n", NULL);

	ft_printf("\nLongitudes ft_printf >> %d %d %d\n", a,b,c);
	ft_printf("Longitudes    printf >> %d %d %d\n", d,e,f);

	ft_printf("\n*** El puntero void * dado como argumento se imprime en formato hexadecimal. ***\n");

	a = ft_printf("%p\n", INT_MIN);
	e = printf("%p\n", INT_MIN);
	b = ft_printf("%p\n", INT_MAX);
	f = printf("%p\n", INT_MAX);
	c = ft_printf("%p\n", 0);
	g = printf("%p\n", 0);
	d = ft_printf("%p\n", NULL);
	h = printf("%p\n", NULL);

	ft_printf("\nLongitudes ft_printf >> %d %d %d %d\n", a,b,c,d);
	ft_printf("Longitudes    printf >> %d %d %d %d\n", e,f,g,h);

	ft_printf("\n*** Imprime un número decimal (base 10) e imprime un entero en base 10. ***\n");

	a = ft_printf("%d y %i\n", INT_MIN,INT_MIN);
	e = printf("%d y %i\n", INT_MIN,INT_MIN);
	b = ft_printf("%d y %i\n", INT_MAX,INT_MAX);
	f = printf("%d y %i\n", INT_MAX,INT_MAX);
	c = ft_printf("%d y %i\n", 0, 0);
	g = printf("%d y %i\n", 0, 0);
	d = ft_printf("%d y %i\n", NULL, NULL);
	h = printf("%d y %i\n", NULL, NULL);

	ft_printf("\nLongitudes ft_printf >> %d %d %d %d\n", a,b,c,d);
	ft_printf("Longitudes    printf >> %d %d %d %d\n", e,f,g,h);


	ft_printf("\n*** Imprime un número decimal (base 10) sin signo. ***\n");

	a = ft_printf("%u\n", INT_MIN);
	e = printf("%u\n", INT_MIN);
	b = ft_printf("%u\n", INT_MAX);
	f = printf("%u\n", INT_MAX);
	c = ft_printf("%u\n", 0);
	g = printf("%u\n", 0);
	d = ft_printf("%u\n", NULL);
	h = printf("%u\n", NULL);

	ft_printf("\nLongitudes ft_printf >> %d %d %d %d\n", a,b,c,d);
	ft_printf("Longitudes    printf >> %d %d %d %d\n", e,f,g,h);


	ft_printf("\n*** Imprime un número hexadecimal (base 16) en minúsculas e imprime un número hexadecimal (base 16) en mayúsculas ***\n");
	
	a = ft_printf("%x y %X\n", INT_MIN,INT_MIN);
	e = printf("%x y %X\n", INT_MIN,INT_MIN);
	b = ft_printf("%x y %X\n", INT_MAX,INT_MAX);
	f = printf("%x y %X\n", INT_MAX,INT_MAX);
	c = ft_printf("%x y %X\n", 0, 0);
	g = printf("%x y %X\n", 0, 0);
	d = ft_printf("%x y %X\n", 255, NULL);
	h = printf("%x y %X\n", NULL, NULL);

	ft_printf("\nLongitudes ft_printf >> %d %d %d %d\n", a,b,c,d);
	ft_printf("Longitudes    printf >> %d %d %d %d\n", e,f,g,h);

	ft_printf("\n*** Imprimir el símbolo del porcentaje. ***\n");

	a = ft_printf("%%%%%%\n");
  b = printf("%%%%%%\n");

	ft_printf("\nLongitudes ft_printf >> %d \n", a);
	ft_printf("Longitudes    printf >> %d \n", b);

	ft_printf("\n*** Pruebas ***\n");

	ft_printf("%s hola %d\n", NULL, 3);
    printf("%s hola %d\n", NULL, 3);

	int num1, num2;
	num1 = 789;
	num2 = 654;

	ft_printf("\nLa suma de %d con %i es = %d.\n", num1, num2, num1+num2);
	printf("La suma de %d con %i es = %d.\n", num1, num2, num1+num2);

	ft_printf("\n%d %d %d %d %d %d %d %d %d %d", 1,2,3,4,5,6,7,8,9,0);
	printf("\n%d %d %d %d %d %d %d %d %d %d", 1,2,3,4,5,6,7,8,9,0);
	
	ft_printf("regwerg%wergwer\n");
	printf("regwerg%wergwer\n");

	ft_printf("regwerg%3wergwer%");
	ft_printf("\n");
	printf("regwerg%3wergwer%");
}