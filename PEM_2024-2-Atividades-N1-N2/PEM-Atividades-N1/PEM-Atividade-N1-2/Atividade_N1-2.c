// Criadores do Código: Diego Lopes Sakata, Jonathan Batista Bispo, Matheus Arthur, Denis Ramos e Caue Ferreira.
// Código consertado em sala.

#include <stdio.h>

int main()
{
    int n, i, t, a = 0, cont = 1, loop;
    
    printf("Esse programa calculará a nota final do candidato.\n");
    printf("Quantas categorias diferentes existem?\n");
    printf("R: ");
    scanf("%i",&n);
    
    if(n > 0){
    char cat[n][100];
    
    for(i = 0; i < n; i++){
        printf("Digite o nome da %i categoria: ",cont);
        scanf(" %99[^\n]",cat[i]);
        cont++;
    }
    
    int test[n], b = n - 1;
    
    for(i = 0; i < n; i++){
        printf("Quantos testes tem na categoria %s: ",cat[i]);
        scanf("%i",&test[i]);
        while(test[i] <= 2){
            printf("O número de testes deve ser maior do que 2.\n");
            printf("Digite novamente o número de testes presente na categoria: ");
            scanf("%i",&test[i]);
        }
    }
    
    for(i = 0; i < n; i++){
        if (a < test[i]){
            a = test[i];
        }
    }
    
    float notas[n][a], maior[n], menor[n], soma[n+1];
    
    
    for(i = 0; i < n; i++){
        printf("Digite as notas dos testes de %s\n",cat[i]);
        for(a = 0; a < test[i]; a++){
            scanf("%f",&notas[i][a]);
            if(notas[i][a] < 0 || notas[i][a] > 10){
                printf("As notas devem ser entre 0 e 10.\n");
                printf("Entre novamente com as notas que voce digitou errado: ");
                while(notas[i][a] < 0 || notas[i][a] > 10){
                    scanf("%f",&notas[i][a]);
                }
            }
        }
    }

    printf("Você deseja entrar com mais alguma categoria?");
    printf("\nDigite 1 para sim ou 0 para nao: ");
    scanf("%i",&loop);
    
    while(loop == 1){
        printf("Digite a quantidade de categorias que você deseja entrar: ");
        scanf("%i",&t);
        
        if(t > 0){
            cont = 1;
            n = n + t;
            
            for(i = b; i < t; i++){
                printf("Digite o nome da %i categoria nova: \n",cont);
                scanf(" %99[^\n]",cat[i]);
                cont++;
            }
            
            for(i = b; i < t; i++){
                printf("Digite a quantidade de testes da categoria %s: ",cat[i]);
                scanf("%i",&test[i]);
                while(test[i] <= 2){
                    printf("O número de testes deve ser maior do que 2.\n");
                    printf("Digite novamente o número de testes presente na categoria: ");
                    scanf("%i",&test[i]);
                }
            }
            
            for(i = 0; i < n; i++){
                if (a < test[i]){
                    a = test[i];
                }
            }
            
            for(i = b; i < n; i++){
                printf("Digite as notas dos testes de %s\n",cat[i]);
                for(a = b; a < test[i]; a++){
                    scanf("%f",&notas[i][a]);
                    if(notas[i][a] < 0 || notas[i][a] > 10){
                        printf("As notas devem ser entre 0 e 10.\n");
                        printf("Entre novamente com as notas que voce digitou errado: ");
                        while(notas[i][a] < 0 || notas[i][a] > 10){
                            scanf("%f",&notas[i][a]);
                        }
                    }
                }
            }
            
            printf("Você deseja entrar com mais alguma categoria?");
            printf("\nDigite 1 para sim ou 0 para nao: ");
            scanf("%i",&loop);
        
        }
        
        
        else{
            loop = 0;
        }
    }
    
    for(i = 0; i < n; i++){
        maior[i] = 0;
        menor[i] = 10;
        for(a = 0; a < test[i]; a++){
            if(maior[i] < notas[i][a]){
                maior[i] = notas[i][a];
            }
            if(menor[i] > notas[i][a]){
                menor[i] = notas[i][a];
            }
        }
    }
    
    for(i = 0; i < n; i++){
        soma[i] = 0;
        
        for(a = 0; a < test[i]; a++){
                soma[i] = soma[i] + notas[i][a];
        }
    }
    
    for(i = 0; i < n; i++){
        soma[i] = soma [i] - menor [i] - maior[i];
    }
    
    soma[n+1] = 0;
    
    for(i = 0; i < n; i++){
        soma[n+1] = soma[n+1] + soma[i];
    }
    
    // A partir daqui o "é" está escrito como "eh", pois algumas vezes o acento agudo pode dar problema na línguagem C e não aparecer.
    
    for(i = 0; i < n; i++){
        printf("A nota da categoria %s eh: %.2f\n",cat[i],soma[i]);
    }
    
    printf("A nota final do candidato eh: %.2f",soma[n+1]);
    
    }
    
    else{
        printf("Não existem categorias para calcular a nota.");
    }


    return 0;
}