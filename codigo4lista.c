#include <stdio.h>
#include <string.h>

typedef struct {
    char comprador[30];
    char pais[30];
    char continente[10];
    int codigo;
    int quantidade;
} lins;

int main (){
    int N;
    scanf("%d", &N);
    if (N == 0){
        printf("sem negociacoes");
    }
    else{ 
        for(int i = 0; i < N; i++){
        fgets(lins.comprador, 30, stdin);
        fgets(lins.pais, 30, stdin);
        fgets(lins.continente, 10, stdin);
        scanf("%d", &lins.codigo);
            if(lins.codigo == 0){
                printf("Operacao invalida!");
        }
        else{
            scanf("%d", &lins.quantidade);
            
                }
                
            }
        }
        
}
    
