#include <locale.h>

#include <stdlib.h>

#include <stdio.h>

#include <string.h>

#define LINHA 4

#define COLUNA 6

void inicializar (float matriz[LINHA][COLUNA]) {

 int x,y;

 for (x = 0;x < LINHA;x++){

 for (int y = 0;y < COLUNA;y++){

 matriz [x][y]=0;
}

 }

}

void preencher (float matriz[LINHA][COLUNA]) {

 int x,y;

 for (x = 0;x < LINHA;x++){

 for (y = 0;y < COLUNA;y++){

 printf ("Informe o valor da venda da %d° Semana  %d° dia:\n",x+1,y+1);

 scanf ("%f", &matriz[x][y]);

 fflush (stdin);

}

 }

 system("cls");

}

void imprimir(float matriz[LINHA][COLUNA]){

 int x,y;

 for(x = 0;x < LINHA;x++){

 printf ("Semana %d:\n",x+1);

 for (y = 0;y < COLUNA;y++){

 printf ("dia %d valor: %.2f\n",y+1,matriz[x][y]);

}

printf ("\n");

 }

}

void media(float matriz[LINHA][COLUNA]){

 int x,y;

 float media = 0;

 for (x = 0;x < LINHA;x++){

 for (y = 0;y < COLUNA;y++){

 media = media + matriz[x][y];

}

 }

 media = media/(LINHA*COLUNA);

 printf ("A Média do mês é:%.2f\n",media);
}

void menu(float matriz[LINHA][COLUNA]){

int menu =-1;

while(menu !=0){

system("cls");

printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>RAFAEL ALVES<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>Selecione uma Opção e tecle (ENTER)<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<:\n");
printf("\n");

printf("(1)-Preencher valor total das vendas no dia ------  (2)-Exibir Vendas ------  (3)-Médias de vendas ------  (0)-Sair\n");

scanf("%d",&menu);

fflush(stdin);

switch(menu){

case 1:preencher(matriz);break;

case 2:imprimir(matriz);break;

case 3:media(matriz);break;

case 0:menu = 0;break;

default:printf("Opção invalida!\n");

}system("pause");

}

}

int main(){

setlocale(LC_ALL , "portuguese");

float matriz[LINHA][COLUNA];

 inicializar(matriz);

 menu(matriz);
 
 return 0;

}
