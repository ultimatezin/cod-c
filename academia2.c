#include <stdio.h>
#include <string.h>

typedef struct {
    char nome [50];
    int senha;
    char sit;
    int entrada;

} s;

int main(){

int quantidade = 0;

s matricula[100];
    for (int i = 0; i < 100; i++){
        setbuf(stdin, NULL);
        gets(matricula[i].nome);
        setbuf(stdin, NULL);
        if(strncmp(matricula[i].nome, "SAIR", 4) == 0){
        break;
    }
    else{
        scanf(" %d", &matricula[i].senha);
        fflush(stdin);
        scanf(" %c", &matricula[i].sit);
        fflush(stdin);
        quantidade++;
        }
}

for (int i = 0; i < 100; i++){
scanf("%d", &matricula[i].entrada);
if(matricula[i].entrada == -1){
    break;
}
}




    for (int q = 0; q < quantidade - 1; q++){
        for(int i = 0; i < quantidade - 1; i++){
            if(matricula[q].entrada == matricula[i].senha && matricula[i].sit == 'P'){
                printf("%s, seja bem-vindo(a)!\n", matricula[i].nome);
            }
            if(matricula[q].entrada == matricula[i].senha && matricula[i].sit == 'F'){
                printf("Nao esta esquecendo de algo, %s? Procure a recepcao!\n", matricula[i].nome);
            }
        }
    }

    for (int i = 0; i < quantidade - 1; i++)
{
    int j = 0;

    if (matricula[j].entrada != matricula[i].senha)
    {
        printf("Seja bem-vindo(a)! Procure a recepcao!");
    }
    j++;

}





    return 0;

}