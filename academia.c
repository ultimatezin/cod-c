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
int imp = 0;
int senhas = 0;

s matricula[100];
    for (int i = 0; i < 100; i++){
        setbuf(stdin, NULL);
        fgets(matricula[i].nome, 50, stdin);
        setbuf(stdin, NULL);
        if(strncmp(matricula[i].nome, "SAIR", 4) == 0){
        break;
    }
    else{
        scanf(" %d", &matricula[i].senha);
        setbuf(stdin, NULL);
        scanf(" %c", &matricula[i].sit);
        setbuf(stdin, NULL);
        quantidade++;
        }
}

for (int i = 0; i < 100; i++){
scanf("%d", &matricula[i].entrada);
if(matricula[i].entrada == -1){
    break;
}
else{
    senhas++;
}



}




        for (int q = 0; q < quantidade; q++){
            for(int i = 0; i < quantidade; i++){
                printf("%c", matricula[i].sit);
            if(matricula[q].entrada == matricula[i].senha && matricula[i].sit == 'P'){
                printf("%s, seja bem-vindo(a)!\n", matricula[i].nome);
                imp++;
            }
            if(matricula[q].entrada == matricula[i].senha && strncmp(matricula[i].sit, "F", 1) == 0){
                printf("Nao esta esquecendo de algo, %s? Procure a recepcao!\n", matricula[i].nome);
                imp++;
            }
        }
    }

    int nao = senhas - imp;

    for(int i = 0; i < nao; i++){
        printf("Seja bem-vindo(a)! Procure a recepcao!\n");
        }
    

    

    









    return 0;

}