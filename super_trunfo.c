#include <stdio.h>

//Declaração das variáveis para armazenar as informações das cartas.

int main(){
   int Populacao, Turisticos, Populacao2, Turisticos2;
   char Estado, Estado2;
   char Cidade[43], Cidade2[40];
   char Codigo[13], Codigo2[10];
   float PIB, Area, PIB2, Area2;
   float Densidade, Densidade2, perCapita, perCapita2;
   float SuperPoder, SuperPoder2;
   
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

   //calculando a densidade populacional e o pib per capita

   Densidade = Populacao / Area;
   Densidade2 = Populacao2 / Area2;

   perCapita = PIB / Populacao;
   perCapita2 = PIB2 / Populacao2;

   // calculando suoer poder das cartas

   SuperPoder = (float) Populacao + Turisticos + PIB + perCapita + Area + (1 /Densidade);
   SuperPoder2 = (float) Populacao2 + Turisticos2 + PIB2 + perCapita2 + Area2 + (1 /Densidade2);

   //Mostrando as informações da primeira carta

   printf("Informações da Carta 1:\n Estado: %c\n Código da carta: %s\n Cidade: %s\n Super Poder: %.2f\n População: %d\n", Estado, Codigo, Cidade, SuperPoder, Populacao);
   printf(" Área: %.2fkm².\n PIB: %.2f bilhões de reais.\n Número de Pontos Turísticos: %d\n", Area, PIB, Turisticos);
   printf(" Densidade populacional: %.2f hab/km²\n PIB Per Capita: %.2f reais.\n\n", Densidade, perCapita);

   //Mostrando as informações da segunda carta carta

   printf("Informações da Carta 2:\n Estado: %c\n Código da carta: %s\n Cidade: %s\n Super poder: %.2f\n População: %d\n", Estado2, Codigo2, Cidade2, SuperPoder2, Populacao2);
   printf(" Área: %.2f km².\n PIB: %.2f bilhões de reais.\n Número de Pontos Turísticos: %d\n", Area2, PIB2, Turisticos2);
   printf(" Densidade populacional: %.2f hab/km²\n PIB Per Capita: %.2f reais.\n\n", Densidade2, perCapita2);

   // mostrando qual carta é melhor

   printf("Comparando os atributos das duas cartas:\n");
   printf(" Super Poder: Carta 1 venceu: (%d)\n População: Carta 1 venceu: (%d)\n Área: Carta 1 venceu: (%d)\n", SuperPoder > SuperPoder2, Populacao > Populacao2, Area > Area2);
   printf(" PIB: Carta 1 venceu: (%d)\n Pontos Turísticos: Carta 1 venceu: (%d)\n", PIB > PIB2, Turisticos > Turisticos2);
   printf(" Densidade populacional: Carta 1 venceu: (%d)\n PIB Per Capita: Carta 1 venceu: (%d)\n", Densidade < Densidade2, perCapita > perCapita2);
   
   return 0;

}