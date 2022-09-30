#include <stdio.h>
#include <string.h>

typedef struct {
    char comprador[30];
    char pais[30];
    char continente[10];
    int codigo;
    int quantidade;
} lins;

lins luciogel(){
    
    lins lins_compras;
        fflush(stdin);
        fgets(lins_compras.comprador, 29, stdin);
        fflush(stdin);
        fgets(lins_compras.pais, 29, stdin);
        fflush(stdin);
        fgets(lins_compras.continente, 9, stdin);
        fflush(stdin);
        scanf("%d", &lins_compras.codigo);
        fflush(stdin);
            if(lins_compras.codigo > 709 || lins_compras.codigo > 700){
                printf("Operacao invalida!");
        }
        else{
            fflush(stdin);
            scanf("%d", &lins_compras.quantidade);
            fflush(stdin);
            
                }
                return lins_compras;
            }
            


float Africa = 250.00 / 5.17;
float America = 150.00 / 5.17;
float Asia = 450.00 / 5.17;
float Europa = 300.00 / 5.17;
float Oceania = 400.00 / 5.17;


int main (){
    int N;
    float preco = 0;
    float frete = 0;
    char nome[30];
    float preco1 = preco / 5.17;
    float precot = 0;
    scanf("%d", &N);

    lins nomedovetor[N];
    if (N == 0){

        printf("sem negociacoes");
    }
    else{
        for(int i = 0; i < N; i++){
            nomedovetor[i] = luciogel();
        }
    }

    for(int i = 0; i < N; i++){
        if (nomedovetor[i].codigo == 700){
     preco = 163.43 * (float)nomedovetor[i].quantidade;

} else if (nomedovetor[i].codigo == 701){
    preco = 123.09 * (float)nomedovetor[i].quantidade;
} else if (nomedovetor[i].codigo == 702){
    preco = 179.53 * (float)nomedovetor[i].quantidade;
} else if (nomedovetor[i].codigo == 703){
    preco = 193.78 * (float)nomedovetor[i].quantidade;
} else if (nomedovetor[i].codigo == 704){
     preco = 156.66 * (float)nomedovetor[i].quantidade;
} else if (nomedovetor[i].codigo == 705){
     preco = 249.51 * (float)nomedovetor[i].quantidade;
} else if (nomedovetor[i].codigo == 706){
     preco = 221.75 * (float)nomedovetor[i].quantidade;
} else if (nomedovetor[i].codigo == 707){
     preco = 457.85 * (float)nomedovetor[i].quantidade;
} else if (nomedovetor[i].codigo == 708){
    preco = 173.98 * (float)nomedovetor[i].quantidade;
} else if (nomedovetor[i].codigo == 709){
     preco = 376.91 * (float)nomedovetor[i].quantidade;
}

    
    float precot = 0;
    for(int i = 0; i < N; i++){
        if (strncmp(nomedovetor[i].continente, "Africa", 6) == 0){
            precot = preco1 + Africa;
        } else if (strncmp(nomedovetor[i].continente, "America", 7) == 0){
            precot = preco1 + America;
        } else if (strncmp(nomedovetor[i].continente, "Asia", 4) == 0){
            precot = preco1 + Asia;
        } else if (strncmp(nomedovetor[i].continente, "Europa", 6) == 0){
            precot = preco1 + Europa;
        } else if (strncmp(nomedovetor[i].continente, "Oceania", 7) == 0){
            precot = preco1 + Oceania;
        }
    }

    for(int i = 0; i < N; i++){
        if (strncmp(nomedovetor[i].continente, "Africa", 6) == 0){
            frete = 250.00 / 5.17;
        } else if (strncmp(nomedovetor[i].continente, "America", 7) == 0){
            frete = 150.00 / 5.17;
        } else if (strncmp(nomedovetor[i].continente, "Asia", 4) == 0){
            frete = 450.00 / 5.17;
        } else if (strncmp(nomedovetor[i].continente, "Europa", 6) == 0){
            frete = 300.00 / 5.17;
        } else if (strncmp(nomedovetor[i].continente, "Oceania", 7) == 0){
            frete = 400.00 / 5.17;
        }
    }

    for(int i = 0; i < N; i++){
        if (strncmp(nomedovetor[i].continente, "Africa", 6) == 0){
            precot = preco1 + Africa;
        } else if (strncmp(nomedovetor[i].continente, "America", 7) == 0){
            precot = preco1 + America;
        } else if (strncmp(nomedovetor[i].continente, "Asia", 4) == 0){
            precot = preco1 + Asia;
        } else if (strncmp(nomedovetor[i].continente, "Europa", 6) == 0){
            precot = preco1 + Europa;
        } else if (strncmp(nomedovetor[i].continente, "Oceania", 7) == 0){
            precot = preco1 + Oceania;
        }
    }


for(int i = 0; i < N; i++){
        if (nomedovetor[i].codigo == 700){
        strcpy(nome, "Soja");
        }
        if (nomedovetor[i].codigo == 701){
        strcpy(nome, "Cafe");
        }
}       
        if (nomedovetor[i].codigo == 702){
strcpy(nome, "Laranja");
}
        if (nomedovetor[i].codigo == 703){

strcpy(nome, "Banana");
}
        if (nomedovetor[i].codigo == 704){

strcpy(nome, "Trigo");
}
        if (nomedovetor[i].codigo == 705){

strcpy(nome, "Melancia");
}
        if (nomedovetor[i].codigo == 706){

strcpy(nome, "Abacaxi");
}
        if (nomedovetor[i].codigo == 707){

strcpy(nome, "Carne bovinha");
}
        if (nomedovetor[i].codigo == 708){
strcpy(nome, "Caju");
}
        if (nomedovetor[i].codigo == 709){
strcpy(nome, "Carne suina");
}
    }

    



    for (int i = 0; i < N; i++){
        printf("%s", nomedovetor[i].comprador);
        printf("%s", nomedovetor[i].pais);
        printf("%s", nome);
        printf("%.2f", frete);
        printf("%.2f", preco1);
        printf("Valor total: %.2f", precot);
    }
    

    return 0;
}
    
