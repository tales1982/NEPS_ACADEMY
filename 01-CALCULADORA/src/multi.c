/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:24:10 by tales             #+#    #+#             */
/*   Updated: 2025/06/09 10:28:20 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculadora.h"

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