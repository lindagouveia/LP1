#include <stdio.h>

int main ()
{
	int parc;
	float emp, sal;
	
	printf ("Digite o valor do emprestimo:");
	scanf ("%f", &emp);
	
	printf ("Digite o numero de parcelas:");
	scanf ("%d", &parc);
	
	printf ("Digite seu salario:");
	scanf ("%f", &sal);	
	
	if (parc == 0.1*sal || parc == 0.2*sal || parc == 0.3*sal) {
		
		printf ("emprestimo aprovado");
	}
	
	else {
		
		printf ("emprestimo nao aprovado");
	}
	
	return 0;

}
