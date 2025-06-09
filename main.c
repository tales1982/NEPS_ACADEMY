#include <stdio.h>
#include <stdlib.h>

void menu()
{
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

int somar(int *a, int *b)
{
    int ch;
    char exit;

    printf("Digite o primeiro número: ");
    scanf("%d", a);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Digite o segundo número: ");
    scanf("%d", b);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Resultado: %d + %d = %d\n", *a, *b, *a + *b);

    printf("Deseja realizar outra operação? (s/n): ");
    exit = getchar();
    while ((ch = getchar()) != '\n' && ch != EOF);

    if (exit != 's' && exit != 'S' && exit != 'n' && exit != 'N') {
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        printf("Deseja realizar outra operação? (s/n): ");
        exit = getchar();
    }

    if (exit == 'n' || exit == 'N') {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
        return 0;
    }

    return 1;
}

int subtrair(int *a, int *b)
{
    int ch;
    char exit;

    printf("Digite o primeiro número: ");
    scanf("%d", a);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Digite o segundo número: ");
    scanf("%d", b);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Resultado: %d - %d = %d\n", *a, *b, *a - *b);

    printf("Deseja realizar outra operação? (s/n): ");
    exit = getchar();
    while ((ch = getchar()) != '\n' && ch != EOF);

    if (exit != 's' && exit != 'S' && exit != 'n' && exit != 'N') {
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        printf("Deseja realizar outra operação? (s/n): ");
        exit = getchar();
    }

    if (exit == 'n' || exit == 'N') {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
        return 0;
    }

    return 1;
}

int multi(int *a, int *b)
{
    int ch;
    char exit;

    printf("Digite o primeiro número: ");
    scanf("%d", a);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Digite o segundo número: ");
    scanf("%d", b);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Resultado: %d * %d = %d\n", *a, *b, *a * *b);

    printf("Deseja realizar outra operação? (s/n): ");
    exit = getchar();
    while ((ch = getchar()) != '\n' && ch != EOF);

    if (exit != 's' && exit != 'S' && exit != 'n' && exit != 'N') {
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        printf("Deseja realizar outra operação? (s/n): ");
        exit = getchar();
    }

    if (exit == 'n' || exit == 'N') {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
        return 0;
    }

    return 1;
}

int divi(int *a, int *b)
{
    int ch;
    char exit;

    printf("Digite o primeiro número: ");
    scanf("%d", a);
    while ((ch = getchar()) != '\n' && ch != EOF);

    printf("Digite o segundo número: ");
    scanf("%d", b);
    while ((ch = getchar()) != '\n' && ch != EOF);

    if (*b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
    } else {
        printf("Resultado: %d / %d = %d\n", *a, *b, *a / *b);
    }

    printf("Deseja realizar outra operação? (s/n): ");
    exit = getchar();
    while ((ch = getchar()) != '\n' && ch != EOF);

    if (exit != 's' && exit != 'S' && exit != 'n' && exit != 'N') {
        printf("Resposta inválida. Por favor, digite 's' para sim ou 'n' para não.\n");
        printf("Deseja realizar outra operação? (s/n): ");
        exit = getchar();
    }

    if (exit == 'n' || exit == 'N') {
        printf("Obrigado por usar a calculadora! Até a próxima.\n");
        return 0;
    }

    return 1;
}

int main()
{
    int opcao = 0;
    int a = 0, b = 0;
    int ch;
    int continuar = 1;

    do {
        menu();
        scanf("%d", &opcao);
        while ((ch = getchar()) != '\n' && ch != EOF);

        switch(opcao) {
            case 1:
                continuar = somar(&a, &b);
                break;
            case 2:
                continuar = subtrair(&a, &b);
                break;
            case 3:
                continuar = multi(&a, &b);
                break;
            case 4:
                continuar = divi(&a, &b);
                break;
            case 5:
                printf("Saindo...\n");
                continuar = 0;
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while(opcao != 5 && continuar);

    return 0;
}

