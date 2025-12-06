#include <stdio.h>
#include "ft_printf.h"

int	ft_printf(char const *str, ...);

int main(){
	int	n = 42;
	int	*ptr = &n;
	void	*p = NULL;
	printf("-------printf del sys-------\n\n");

	int a1  = printf("%%\nesto es un num %d y esta es su direccion %p\n\nesto es un puntero null %p", n, ptr, p);
	printf("\n\n\ncaracters impressos = %i\n", a1);

	int a2 = printf("%%\nesto es una prueba");
	printf("\n\n\ncaracters impressos = %i\n", a2);

	int a3 = printf("Hola %) world\n");
	printf("\n\n\ncaracters impressos = %i\n", a3);

	printf("\n\n-------my printf-------\n\n");

	int b1 = ft_printf("%%\nesto es un num %d y esta es su direccion %p\n\nesto es un puntero null %p", n, ptr, p);
	printf("\n\n\ncaracters impressos = %i\n", b1);
	
	int b2 = ft_printf("%%\nesto es una prueba");
	printf("\n\n\ncaracters impressos = %i\n", b2);
	
	int b3 = ft_printf("Hola %) world\n");
	printf("\n\n\ncaracters impressos = %i\n", b3);
}
