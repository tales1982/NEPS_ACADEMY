/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 10:25:11 by tales             #+#    #+#             */
/*   Updated: 2025/06/09 10:28:10 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculadora.h"

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
