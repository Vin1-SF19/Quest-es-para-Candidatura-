#include <stdio.h>


//Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);


int main() {
	
	int INDICE = 12, SOMA = 0, K = 1;
	
	while(K < INDICE){
		K = K + 1;
		SOMA = SOMA + K;
	}
	
	printf("%d ", SOMA);

    printf("Próximo elemento das sequências:\n");

    printf("a) %d\n", 9); 

    printf("b) %d\n", 128); 

    printf("c) %d\n", 49); 

    printf("d) %d\n", 100); 

    printf("e) %d\n", 13); 

    printf("f) %d\n", 20); 

    return 0;
}

