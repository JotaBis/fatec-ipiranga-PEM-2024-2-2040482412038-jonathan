/*--------------------------------------------------------*
* Disciplina: Programaçao Estruturada e Modular *
*          Prof. Carlos Veríssimo                                    *
*--------------------------------------------------------*
* Objetivo do Programa: Criar um Xadrez.      *
* Data - 30/08/2024                                              * 
* Autores: Diego Lopes Sakata, Jonathan Batista Bispo, Matheus Arthur, Diego Silva, Dennis Ramos, Caue Ferreira e Pedro Yun  * 
*--------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i=8,casa=0, coluna, linha;
    char pecas[9] = "TCBRDBCTP", cor[2]= "PB";

    for (linha = 0; linha <= i; linha++)
    {
        if (linha < 2 || linha > 6)
        {
            switch (linha)
            {
                case 0:
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

                case 1:
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
