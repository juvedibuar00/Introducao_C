#include <stdio.h>
// Incluir a biblioteca regional
#include <locale.h>
int main() {
    // Define a localidade para UTF-8 em portugu�s brasileiro
    setlocale(LC_ALL, "Portuguese_Brazil");
    // OBS. Antes de mandar executar o c�digo, rode no terminal o seguinte comando: chcp 65001
    // Change Code Page para 65001
    // Declara��o de vari�veis
    int a, b;
    int soma, subtracao, multiplicacao;

    // Entrada de dados
    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &b);

    // Opera��es aritm�ticas
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;

    // Sa�da de resultados
    printf("\nResultados das opera��es:\n");
    printf("Soma: %d\n", soma);
    printf("Subtra��o: %d\n", subtracao);
    printf("Multiplica��o: %d\n", multiplicacao);
    
    return 0;
}
