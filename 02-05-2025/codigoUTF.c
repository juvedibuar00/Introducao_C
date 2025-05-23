#include <stdio.h>
#include <locale.h>

int main() {
    // Define a localidade para UTF-8 em português brasileiro
    setlocale(LC_ALL, "Portuguese_Brazil.1252");
    // OBS. Antes de mandar executar o código, rode no terminal o seguinte comando: chcp 65001
    // Change Code Page para 65001


    printf("Olá, mundo! Você está bem?\n");
    printf("Acentos: á é í ó ú ç ã õ â ê î ô û\n");
    

    return 0;
}
