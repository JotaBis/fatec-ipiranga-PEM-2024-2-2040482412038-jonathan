/*--------------------------------------------------------*
* Disciplina: Programaçao Estruturada e Modular *
*          Prof. Carlos Veríssimo                                    *
*--------------------------------------------------------*
* Objetivo do Programa: Criar um tabuleiro de Xadrez.      *
* Data - 30/08/2024                                              * 
* Autores: Jonathan Batista Bispo* 
*--------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i=8,casa=0, coluna, linha;
    char pecas[9] = "TCBDRBCTP", cor[2]= "PB";

    for (linha = 1; linha <= i; linha++)
    {
        if (linha < 3 || linha > 6)
        {
            switch (linha)
            {
                case 1:
                    for(coluna = 0; coluna < i; coluna++)
                    {
                        printf("%c%c",cor[casa],pecas[coluna]);
                        if(coluna < 3)
                        {
                            printf("1 ");
                        }
                        else if(coluna > 4)
                        {
                            printf("8 ");
                        }
                        else
                        {
                            printf("  ");
                        }
                            
                    }
                break;

                case 2:
                    for(coluna = 1; coluna <= i; coluna++)
                    {
                        printf("%c%c%i ",cor[casa],pecas[8],coluna);
                    }
                break;

                case 7:
                    casa=1;
                    for(coluna = 1; coluna <= i; coluna++)
                    {
                        printf("%c%c%i ",cor[casa],pecas[8],coluna);
                    }
                break;

                case 8:
                    casa=1;
                    for(coluna = 0; coluna < i; coluna++)
                    {
                        printf("%c%c",cor[casa],pecas[coluna]);
                        if(coluna < 3)
                        {
                            printf("1 ");
                        }
                        else if(coluna > 4)
                        {
                            printf("8 ");
                        }
                        else
                        {
                            printf("  ");
                        }
                    }
                    break;
            }
        }
        else
        {
            for(coluna = 0; coluna < i; coluna++)
            {
                printf(" X  ");
            }
        }
    printf("\n");
    }
    return 0;
}