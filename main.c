#include <stdio.h>
#include <stdlib.h>

// Exibe o menu principal
void menu() {
    printf("===============================\n");
    printf("        Calculadora Simples    \n");
    printf("===============================\n");
    printf("Selecione uma operação:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("5. Sair\n");
    printf("Opção: ");
}

// Função para perguntar se o usuário quer continuar
int perguntar_continuar() {
    int ch;
    char resposta;

    printf("Deseja realizar outra operação? (s/n): ");
    resposta = getchar();
    while ((ch = getchar()) != '\n' && ch != EOF); // limpar buffer

    while (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N') {
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        printf("Deseja realizar outra operação? (s/n): ");
        resposta = getchar();
        while ((ch = getchar()) != '\n' && ch != EOF);
    }

    if (resposta == 'n' || resposta == 'N') {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
        return 0;
    }
    return 1;
}

// Operações matemáticas
int somar() {
    float a, b;
    int ch;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Digite o segundo número: ");
    scanf("%f", &b);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Resultado: %.2f + %.2f = %.2f\n", a, b, a + b);
    return perguntar_continuar();
}

int subtrair() {
    float a, b;
    int ch;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Digite o segundo número: ");
    scanf("%f", &b);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Resultado: %.2f - %.2f = %.2f\n", a, b, a - b);
    return perguntar_continuar();
}

int multiplicar() {
    float a, b;
    int ch;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Digite o segundo número: ");
    scanf("%f", &b);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Resultado: %.2f * %.2f = %.2f\n", a, b, a * b);
    return perguntar_continuar();
}

int dividir() {
    float a, b;
    int ch;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Digite o segundo número: ");
    scanf("%f", &b);
    while ((ch = getchar()) != '\n' && ch != EOF);

    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
    } else {
        printf("Resultado: %.2f / %.2f = %.2f\n", a, b, a / b);
    }

    return perguntar_continuar();
}

// Função principal
int main() {
    int opcao = 0;
    int continuar = 1;
    int ch;

    do {
        menu();
        if (scanf("%d", &opcao) != 1) {
            while ((ch = getchar()) != '\n' && ch != EOF); // limpar buffer
            printf("Entrada inválida. Por favor, digite um número entre 1 e 5.\n");
            continue;
        }

        while ((ch = getchar()) != '\n' && ch != EOF); // limpar buffer

        if (opcao < 1 || opcao > 5) {
            printf("Opção inválida. Digite um número entre 1 e 5.\n");
            continue;
        }

        switch (opcao) {
            case 1:
                continuar = somar();
                break;
            case 2:
                continuar = subtrair();
                break;
            case 3:
                continuar = multiplicar();
                break;
            case 4:
                continuar = dividir();
                break;
            case 5:
                printf("Obrigado por usar a calculadora! Até a próxima.\n");
                continuar = 0;
                break;
        }

    } while (continuar);

    return 0;
}

