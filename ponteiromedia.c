#include <stdio.h>
#include <string.h>

void mmm(int lista[20], int *menor, int *maior, float *media){
    

    for(int i = 0; i < 20; i++){
        scanf("%d", &lista[i]);
    }
    
    *menor = lista[0];
    *maior = lista[0];

    for(int i = 0; i < 20; i++){
        if(lista[i] < *menor){
            *menor = lista[i];
        }
        if(lista[i] > *maior){
            *maior = lista[i];
        }
    }
    
    int soma = (float)*maior + (float)*menor;
    *media = (float)soma / 2;

    printf("%d %d\n %.1f", *maior, *menor, (float)*media);
}

int main(){
    int lista[20];
    int menor, maior;
    float media;
    mmm(lista, &menor, &maior, &media);
}