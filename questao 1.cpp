#include <stdio.h>
#include <locale.h>
#include <conio.h>

int pertenceFibonacci(int n) {
    int a = 0, b = 1, c = 0;

    if (n == 0 || n == 1) {
        return 1;
    }

    while (c < n) {
        c = a + b; 
        a = b;     
        b = c;    
    }

    return (c == n);
}

int main() {
    int numero;
    
    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("Informe um n�mero: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("O n�mero %d pertence � sequ�ncia de Fibonacci.\n", numero);
    } else {
        printf("O n�mero %d n�o pertence � sequ�ncia de Fibonacci.\n", numero);
    }

    return 0;
}

