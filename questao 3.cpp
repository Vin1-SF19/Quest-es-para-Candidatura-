#include <stdio.h>


//Observe o trecho de c�digo abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE fa�a { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);


int main() {
	
	int INDICE = 12, SOMA = 0, K = 1;
	
	while(K < INDICE){
		K = K + 1;
		SOMA = SOMA + K;
	}
	
	printf("%d ", SOMA);

    printf("Pr�ximo elemento das sequ�ncias:\n");

    printf("a) %d\n", 9); 

    printf("b) %d\n", 128); 

    printf("c) %d\n", 49); 

    printf("d) %d\n", 100); 

    printf("e) %d\n", 13); 

    printf("f) %d\n", 20); 

    return 0;
}

