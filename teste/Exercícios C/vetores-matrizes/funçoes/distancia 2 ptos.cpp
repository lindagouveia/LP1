//Construa uma	função	que	calcule e	retorne a	distância	entre	dois	pontos	(	x1, y1)	e	(x2, y2). Todos	os números	e	valores	de	retorno	
//devem	ser	do	tipo	double. Você terá que incluir trechos de código no algoritmo para que ele retorne o que se está sendo pedido.

//DICA:

//Sabemos que para calcular a distância entre dois pontos (	x1, y1)	e	(x2, y2), temos que calcular da seguinte forma:

//a = x1 - x2; // Encontra a distancia entre os pontos x1 e x2 
//b = y1 - y2; // Encontra a distancia entre os pontos y1 e y2 
//c = a * a + b * b; // faz a conta = aˆ2 + bˆ2 
//sqrt(c); // Acha a raiz da equação.
-------------------------------------------------------------------------------------

//Para auxiliar na construção do algoritmo segue trecho do código:



//#include <stdio.h> 

//#include <math.h> // Biblioteca para a função sqrt (square root - raiz quadrada) 



//int main(){ 

//double x1, x2, y1, y2, res; 

//printf("Digite as coordenadas X e Y do ponto 1:\n"); 

//scanf("%f %f", &x1, &y1); 

// printf("Digite as coordenadas X e Y do ponto 2:\n"); 

// scanf("%f %f", &x2, &y2); 

 

// return 0;

// }

#include <stdio.h>
#include <math.h>

double calculaDistancia(double x1, double y1, double x2, double y2) {
	return sqrt( pow(x2-x1,2) + pow(y2-y1, 2) );
}

int main() {
	double x1,y1,x2,y2,distancia;

	printf("Informe as coordenadas para o primeiro ponto: ");
	scanf("%f %f", &x1, &y1);
	printf("Informe as coordenadas para o segundo ponto: ");
	scanf("%f %f", &x2, &y2);

	distancia = calculaDistancia(x1,y1,x2,y2);

	printf("Distancia: %f", distancia);
}
