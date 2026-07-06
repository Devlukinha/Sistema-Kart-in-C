#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void saudacaoMsg() {

    printf("Funcionou!");
}

void menu() {

    setlocale(LC_ALL, "Portuguese");

    int option;
    bool rep = true;

    printf("\n--------------BEM VINDO AO MENU DO SISTEMA KART------------\n");

    do {
        printf("\nSelecione uma opcao valida abaixo: \n");
        printf("1-Cadastrar kart\n"
               "2-Listar kart disponiveis\n"
               "3-Listar karts locados\n"
               "4-Listar karts em manutencao\n"
               "5-Atualizar dados do kart\n"
               "6-Alugar um kart\n"
               "7-Devolver um kart\n"
               "8-Kart que mais gerou ganhos\n"
               "9-Receita e lucro do dia\n"
               "10-Locacao de circuito\n"
               "11-Atualizar dia\n"
               "12-Sair do programa\n");
        printf("Por favor, digite a opcao desejada: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                saudacaoMsg();
                rep = false;
                break;
                case 2:
                 printf("Caiu no case 2");
                rep = false;
                break;
        }

    } while (rep == true);
}

int main() {

    menu();
    system("pause");
    return 0;
}