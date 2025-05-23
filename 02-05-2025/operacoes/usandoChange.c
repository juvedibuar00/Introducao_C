#include <stdio.h>
// Incluir a biblioteca regional
#include <locale.h>
int main() {
    // Define a localidade para UTF-8 em português brasileiro
    setlocale(LC_ALL, "Portuguese_Brazil");
    // OBS. Antes de mandar executar o código, rode no terminal o seguinte comando: chcp 65001
    // Change Code Page para 65001
    // Declaração de variáveis
    int a, b;
    int soma, subtracao, multiplicacao;

    // Entrada de dados
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &b);

    // Operações aritméticas
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;

    // Saída de resultados
    printf("\nResultados das operações:\n");
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    
    return 0;
}
