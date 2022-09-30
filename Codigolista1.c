#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[40]; 
    int qtd_produtos;
    float totalc;
    char cidade[30]; 
    int end;
}lins;

lins cadastrar (){

    lins pessoa;
    char encerrar = "encerrar";

    gets(pessoa.nome);
    setbuf(stdin, NULL);

    if (strncmp(pessoa.nome, encerrar, 8) != 0){
    
    scanf("%d", &pessoa.qtd_produtos);
    setbuf(stdin, NULL);
    scanf("%f", &pessoa.totalc);
    setbuf(stdin, NULL);
    gets(pessoa.cidade);
    setbuf(stdin, NULL);
    
    return pessoa;

    }else{
        pessoa.end = 0;
        return pessoa;
    }
}

lins vendas[10];


int main(){

    lins pessoa;
    int i = 0;
    char encerrar = "encerrar";

    
    while (pessoa.end != 0 && i < 10)
    {
        pessoa = cadastrar();
        vendas[i] = pessoa;
        i++;
    }


    int soma_qtd = 0;

        for (int j = 0; j < i-1; j++)
        {
            soma_qtd = soma_qtd + vendas[j].qtd_produtos;
        }

    printf("Quantidade vendida: %d\n", soma_qtd);

    float soma_total = 0;

        for (int k = 0; k < i-1; k++)
        {
            soma_total = soma_total + vendas[k].totalc;
        }

    printf("valor arrecadado: %.2f  \n", soma_total);

    float maior = vendas[0].totalc;
    int q = 0; 
    int index = 0;

    for (int q = 0; q < i; q++) {

    if (vendas[q].totalc > maior) {
        maior = vendas[q].totalc;
        index = q;
        printf("q: %d\n", q);
    }
    
}
    
    printf ("%s \n", vendas[index].nome);

    printf("%s\n", vendas[index].cidade);

    return 0;
}

    
