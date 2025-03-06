#include <stdio.h>

//Declaração das variáveis para armazenar as informações das cartas.

int main(){
   int Populacao, Turisticos, Populacao2, Turisticos2;
   char Estado, Estado2;
   char Cidade[43], Cidade2[40];
   char Codigo[13], Codigo2[10];
   float PIB, Area, PIB2, Area2;
   
//Cadastramento das informações da primeira carta

   printf("Vamos cadastrar nossas cartas:\n");
   printf("Carta 1:\n");

   printf("Digite um Estado (uma letra de 'A' até 'H'): \n");
   scanf(" %c", &Estado);

   printf("Código da carta (A letra do estado escolhida seguida de um número de 01 a 04 (ex: A01, B03)): \n");
   scanf("%s", &Codigo);

   printf("Nome da cidade:\n");
   scanf("%s", &Cidade);

   printf("População:\n");
   scanf("%d", &Populacao);

   printf("Área:\n");
   scanf("%f", &Area);

   printf("PIB:\n");
   scanf("%f", &PIB);

   printf("Número de Pontos Turísticos:\n");
   scanf("%d", &Turisticos);
   printf("\n");
  
   //Cadrastamento da carta 2.

   printf("Vamos cadastrar a segunda carta:\n");
   printf("Carta 2:\n");

   printf("Digite um Estado (uma letra de 'A' até 'H' diferenta da Carta 1): \n");
   scanf(" %c", &Estado2);

   printf("Código da carta (A letra do estado escolhida seguida de um número de 01 a 04 (ex: A01, B03)): \n");
   scanf("%s", &Codigo2);

   printf("Nome da cidade:\n");
   scanf("%s", &Cidade2);

   printf("População:\n");
   scanf("%d", &Populacao2);

   printf("Área:\n");
   scanf("%f", &Area2);

   printf("PIB:\n");
   scanf("%f", &PIB2);

   printf("Número de Pontos Turísticos:\n");
   scanf("%d", &Turisticos2);
   printf("\n");

   //Mostrando as informações da primeira carta>

   printf("Informações da Carta 1:\n Estado: %c\n Código da carta: %s\n Cidade: %s\n População: %d\n", Estado, Codigo, Cidade, Populacao);
   printf(" Área: %.2f km².\n PIB: %.2f bilhões de reais.\n Número de Pontos Turísticos: %d\n\n", Area, PIB, Turisticos);


   //Mostrando as informações da segunda carta carta>

   printf("Informações da Carta 2:\n Estado: %c\n Código da carta: %s\n Cidade: %s\n População: %d\n", Estado2, Codigo2, Cidade2, Populacao2);
   printf(" Área: %.2f km².\n PIB: %.2f bilhões de reais.\n Número de Pontos Turísticos: %d\n", Area2, PIB2, Turisticos2);


   return 0;

}
