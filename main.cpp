//Western (ISO 8859-1) iso88591

/*
Metas/ coment�rios gerais:


*/

//Declarando fu��es (criando as voids)
void exibirCabecalho(const char *limpar);//Exibir o nome da empresa "Escola T�cnica Eletr�nica Transistor Ltda."
void exibirMenu(int x, int y);//Exibir os menus a depender da coordenada

//Incluindo bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cstring>
#include <locale>

//Declarando constantes (criando defines)


//Declarando vari�veis globais (criando ints, char, floats e bools)


//Declarando estruturas (criando structs)


//Programa
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");//Definindo idioma para aceitar assentos, caracteres especiais ou qualquer especificidade da l�ngua  portuguesa.

    //Declarando vari�veis privadas (criando ints, char, floats e bools)
    int opcaoMenu;
    bool sairDoSistema = false;
    bool voltarAoMenuPrincipal = false;
    bool voltarAoMenuConsultar = false;

    do{
        voltarAoMenuPrincipal = false;
        voltarAoMenuConsultar = false;
        exibirMenu(0,0);//MENU PRINCIPAL
        printf(" Selecionar a op��o desejada: ");
        scanf("%d", &opcaoMenu);
        while (opcaoMenu < 1 or opcaoMenu > 4){
            exibirMenu(0,0);//MENU PRINCIPAL
            printf(" Selecionar uma op��o desejada v�lida: ");
            scanf("%d", &opcaoMenu);
        }
        switch (opcaoMenu){
        case 1:
            do{
                exibirMenu(1,0);//MENU CADASTRAR
                printf(" Selecionar a op��o desejada: ");
                scanf("%d", &opcaoMenu);
                while (opcaoMenu < 1 or opcaoMenu > 7){
                    exibirMenu(1,0);//MENU CADASTRAR
                    printf(" Selecionar uma op��o desejada v�lida: ");
                    scanf("%d", &opcaoMenu);
                }
                switch (opcaoMenu){
                case 7:
                    voltarAoMenuPrincipal = true;
                    break;
                default:
                    break;
                }
            }while (!voltarAoMenuPrincipal);
            break;
        case 2:
            do{
                exibirMenu(2,0);//MENU CONSULTAR
                printf(" Selecionar a op��o desejada: ");
                scanf("%d", &opcaoMenu);
                while (opcaoMenu < 1 or opcaoMenu > 7){
                    exibirMenu(2,0);//MENU CONSULTAR
                    printf(" Selecionar uma op��o desejada v�lida: ");
                    scanf("%d", &opcaoMenu);
                }
                switch (opcaoMenu){
                case 6:
                    do{
                        exibirMenu(2,6);//MENU CONSULTAR RELAT�RIOS DIVERSOS
                        printf(" Selecionar a op��o desejada: ");
                        scanf("%d", &opcaoMenu);
                        while (opcaoMenu < 1 or opcaoMenu > 6){
                            exibirMenu(2,6);//MENU CONSULTAR RELAT�RIOS DIVERSOS
                            printf(" Selecionar uma op��o desejada v�lida: ");
                            scanf("%d", &opcaoMenu);
                        }
                        switch (opcaoMenu){
                        case 6:
                            voltarAoMenuConsultar = true;
                            break;
                        default:
                            break;
                        }
                    }while (!voltarAoMenuConsultar);
                    break;
                case 7:
                    voltarAoMenuPrincipal = true;
                    break;
                default:
                    break;
                }
            }while (!voltarAoMenuPrincipal);
            break;
        case 3:
            do{
                exibirMenu(3,0);//MENU IMPRESS�O
                printf(" Selecionar a op��o desejada: ");
                scanf("%d", &opcaoMenu);
                while (opcaoMenu < 1 or opcaoMenu > 1){
                    exibirMenu(3,0);//MENU IMPRESS�O
                    printf(" Selecionar uma op��o desejada v�lida: ");
                    scanf("%d", &opcaoMenu);
                }
                switch (opcaoMenu){
                case 1:
                    voltarAoMenuPrincipal = true;
                    break;
                default:
                    break;
                }
            }while (!voltarAoMenuPrincipal);
            break;
        case 4:
            exibirMenu(4,0);//TEM CERTEZA QUE DESEJA FECHAR O PROGRAMA?
            printf(" Selecionar a op��o desejada: ");
            scanf("%d", &opcaoMenu);
            while (opcaoMenu < 1 or opcaoMenu > 2){
                exibirMenu(4,0);//TEM CERTEZA QUE DESEJA FECHAR O PROGRAMA?
                printf(" Selecionar uma op��o desejada v�lida: ");
                scanf("%d", &opcaoMenu);
            }
            if (opcaoMenu == 1){
                sairDoSistema = true;
            }else{
                sairDoSistema = false;
            }
            break;
        default:
            break;
        }
    }while (!sairDoSistema);

    system("color 07");//Definindo cor do console de volta para padr�o
    return 0;
}

//Definindo fun��es (definindo as voids)
void exibirCabecalho(const char *limpar){//Exibir o nome da empresa "Escola T�cnica Eletr�nica Transistor Ltda."
    if(std::strcmp(limpar, "cls" ) == 0){
        system("cls");//Limpar tela
    }
    printf(" ___________________________________________\n");
    printf("|         SGES                              |\n");
    printf("|     SISTEMA DE GESTAO ESCOLAR             |\n");
    printf("|___________________________________________|\n");
}

void exibirMenu(int x, int y){//Exibir os menus a depender da coordenada
    system("color B0");//Definindo cor do console
    exibirCabecalho("cls");
    switch (x){
    case 0:
        switch (y){
        case 0:
            printf("| MENU PRINCIPAL                            |\n");
            printf("| 1-CADASTRAR                               |\n");
            printf("| 2-CONSULTAR                               |\n");
            printf("| 3-IMPRESS�O                               |\n");
            printf("| 4-SAIR DO SISTEMA                         |\n");
            printf("|                                           |\n");
            printf("|___________________________________________|\n");
            break;
        default:
            break;
        }
        break;
    case 1:
        switch (y){
        case 0:
            printf("| MENU CADASTRAR                            |\n");
            printf("| 1-CADASTRAR ALUNOS PARA O PROCESSO        |\n");
            printf("| SELETIVO                                  |\n");
            printf("| 2-CADASTRAR ALUNOS PARA MATRICULA         |\n");
            printf("| 3-CADASTRAR TURMAS                        |\n");
            printf("| 4-CADASTRAR ALUNOS NAS TURMAS             |\n");
            printf("| 5-CADASTRAR DOCENTES                      |\n");
            printf("| 6-CADASTRAR NOTAS                         |\n");
            printf("| 7-VOLTAR AO MENU PRINCIPAL                |\n");
            printf("|                                           |\n");
            printf("|___________________________________________|\n");
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (y){
        case 0:
            printf("| MENU CONSULTAR                            |\n");
            printf("| 1-CONSULTAR CADASTRADOS NO PROCESSO       |\n");
            printf("| SELETIVO                                  |\n");
            printf("| 2-CONSULTAR ALUNOS POR TURMA              |\n");
            printf("| 3-CONSULTAR ALUNOS MATRICULADOS           |\n");
            printf("| 4-CONSULTAR NOTAS POR ALUNOS              |\n");
            printf("| 5-CONSULTAR DOCENTES ATIVOS               |\n");
            printf("| 6-CONSULTAR RELAT�RIOS                    |\n");
            printf("| 7-VOLTAR AO MENU PRINCIPAL                |\n");
            printf("|                                           |\n");
            printf("|___________________________________________|\n");
            break;
        case 6:
            printf("| MENU RELAT�RIOS                           |\n");
            printf("| 1-RELAT�RIO DOS ALUNOS MATRICULADOS       |\n");
            printf("| 2-RELAT�RIO DOS ALUNOS POR TURMAS         |\n");
            printf("| 3-RELAT�RIO DOS CADASTRADOS NO PROCESSO   |\n");
            printf("| SELETIVO                                  |\n");
            printf("| 4-RELAT�RIO DAS NOTAS POR ALUNOS          |\n");
            printf("| INDIVIDUAIS                               |\n");
            printf("| 5-RELAT�RIO DAS NOTAS DOS ALUNOS POR TURMA|\n");
            printf("| 6-VOLTAR AO MENU CONSULTAR                |\n");
            printf("|                                           |\n");
            printf("|___________________________________________|\n");
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (y){
        case 0:
            printf("| MENU IMPRESS�O                            |\n");
            printf("| 1-VOLTAR AO MENU PRINCIPAL                |\n");
            printf("|                                           |\n");
            printf("|___________________________________________|\n");
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (y){
        case 0:
            printf("| TEM CERTEZA QUE DESEJA FECHAR O PROGRAMA? |\n");
            printf("| 1-SIM                                     |\n");
            printf("| 2-N�O                                     |\n");
            printf("|                                           |\n");
            printf("|___________________________________________|\n");
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}
