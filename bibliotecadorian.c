#include <stdio.h>
#include <math.h>

// m = codigo
// n = posicao

// funcao primo
int primo(){
    int resultado = 0;
    int i;
    int num;

    for (i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0)
    printf("%d e um numero primo\n", num);
 else
    printf("%d nao e um numero primo\n", num);
}


void MudancaDeLivros(int *codigo, int *posicao){
    

    for (int i = 0; i < 6; i++){
    int mult = 0;
    codigo+=i;
    int k;
    for(k = 6; k < *codigo; k+=6){
        mult = mult + k;
    }
    printf(" a soma %d\n ", mult);
    codigo-=i;
    }


    for(int i = 0; i < 6; i++){
    int resultado = 0;
    int num = *codigo;
    codigo+=i;
    int q;
    int x[6];
    for (q = 2; q <= num / 2; q++) {
    if (num % q == 0) {
       resultado++;
       break;
    }
 }
 if (resultado == 0){
   num = x[i];
 }else
 {
    num++;
 }
}
for (int i = 0; i < 6; i++){
    printf("%d", x[i]);
}
 /*

 for(int q = 0; q < quantidade; q++){

  int soma=0;

  while(m[q]>0)
  {
    soma+=m[q]%10;
    m[q]/=10;
  }

  printf("%d\n",soma);

}

n[i] = mult - n[i];

for (int i = 0; i < quantidade; i++){
int novocodigo[i];
m[i] = (codigo[i] + x[i]) / soma[i];
}*/
}

int main (){


    int m[100];
    int n[100];
    int *codigo;
    int *posicao;
    codigo = &m;
    posicao = &n;
    int quantidade;
    m[0] = 25;
    m[1] = 9;
    m[2] = 7;
    m[3] = 11;
    m[4] = 13;
    m[5] = 15;
    
MudancaDeLivros(codigo, posicao);
/*

    for (int i = 0; i < quantidade; i++){
        scanf("%d", &m[i]);
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < quantidade; i++){
        printf("%d %d");
for (int i = 0; i < 100; i++){
    scanf("%d %d", &m[i], &n[i]);
    if( 0 < m < 999 || m == 0){
        break;
    } 
    else{
        quantidade++;
    }
    for(int j = quantidade; j > 0; j-- ){
        MudancaDeLivros(codigo, posicao);
    }
  
 //achando o novo codigo
int novocodigo[i];
novocodigo[i] = (m[i] + mprimo) / soma;



 //funcao soma dos algarismos
  for(int q = 0; q < quantidade; q++){

  int soma=0;

  while(m[q]>0)
  {
    soma+=m[q]%10;
    m[q]/=10;
  }

  printf("%d\n",soma);

}

// funcao primo
for(int q = 0; q < quantidade; q++){
    int resultado = 0;
    int i;
    int x[];
    for (i = 2; i <= m[q] / 2; i++) {
    if (m[q] % i == 0) {
       resultado++;
       break;
    }
 }
 
 if (resultado == 0){
   m[q] = x[q];
 }else
 {
    m[q]++;
 }
}

// funcao multiplos
int i;

    for(i = 6; i <= m; i+=6){
        printf("%4d ", i);
        int mult = 0;
        mult = mult + i;
    }*/
          
    return 0;
}