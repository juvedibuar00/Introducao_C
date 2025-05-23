#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    // Declaração de variáveis
    int a, b;
    int soma, subtracao, multiplicacao;
    float divisao;

    // Entrada de dados
    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Operações aritméticas
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = (float)a / b; // casting para garantir divisão real

    // Saída de resultados
    printf("\nResultados das operacoes:\n");
    printf("Soma: %d\n", soma);
    printf("Subtracao: %d\n", subtracao);
    printf("Multiplicacao: %d\n", multiplicacao);
    printf("Divisao: %.2f\n", divisao);

    return 0;
}
