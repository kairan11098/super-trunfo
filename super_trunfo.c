#include <stdio.h>
#include <stdlib.h>

//Declaração das variáveis para armazenar as informações das cartas.

int main(){
   int Populacao, Turisticos, Populacao2, Turisticos2;
   char Estado[10], Estado2[10];
   char Cidade[43], Cidade2[40];
   char Codigo[13], Codigo2[10];
   float PIB, Area, PIB2, Area2;
   float Densidade, Densidade2, perCapita, perCapita2;
   float SuperPoder, SuperPoder2;
   int opcao;
 
//Cadastramento das informações da primeira carta

printf("Vamos cadastrar nossas cartas:\n");
printf("Carta 1:\n");

printf("Digite um Estado pela sigla: \n");
scanf("%s", &Estado);

printf("Código da carta ( uma letra de 'A a D' seguida de um número de 01 a 04 (ex: A01, B03)): \n");
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
scanf("%s", &Estado2);

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

Densidade = (float) Populacao / Area;
Densidade2 = (float) Populacao2 / Area2;

perCapita = (float) PIB / Populacao;
perCapita2 = (float) PIB2 / Populacao2;

// calculando super poder das cartas

SuperPoder = (float) Populacao + Turisticos + PIB + perCapita + Area + (1 /Densidade);
SuperPoder2 = (float) Populacao2 + Turisticos2 + PIB2 + perCapita2 + Area2 + (1 /Densidade2);

   //Dando a opção de qual atributo comparar
   printf("Qual atributo quer comparar?\n 1. Super Poder\n 2. População\n 3. Área\n 4. PIB\n 5. Pontos Turisticos\n 6. Densidade Populacional\n 7. PIB Per Capita\n");
   scanf("%d", &opcao);

   // mostrando qual carta é melhor no atributo escolhido

   switch (opcao)
   {
   case 1: printf("\n* Atributo escolhido: Super Poder *\n");
   printf(" Carta 1:\n Cidade: %s\n Valor do atributo: %.2f\n", Cidade, SuperPoder);
   printf(" Carta 2:\n Cidade: %s\n Valor do atributo: %.2f\n", Cidade2, SuperPoder2);
   if (SuperPoder > SuperPoder2)
   {
    printf("Resultado da comparação: Carta 1 venceu.\n");
   } else if (SuperPoder < SuperPoder2)
   {
      printf("Resultado da comparação: Carta 2 venceu.\n");
   } else printf("Houve um empate.\n");
      break;

      case 2: printf("\n* Atributo escolhido: População *\n");
   printf(" Carta 1:\n Cidade: %s\n Valor do atributo: %d\n", Cidade, Populacao);
   printf(" Carta 2:\n Cidade: %s\n Valor do atributo: %d\n", Cidade2, Populacao2);
   if (Populacao > Populacao2)
   {
    printf("Resultado da comparação: Carta 1 venceu.\n");
   } else if (Populacao < Populacao2)
   {
      printf("Resultado da comparação: Carta 2 venceu.\n");
   } else printf("Houve um empate.\n");
      break;

      case 3: printf("\n* Atributo escolhido: Área *\n");
   printf(" Carta 1:\n Cidade: %s\n Valor do atributo: %.2f km²\n", Cidade, Area);
   printf(" Carta 2:\n Cidade: %s\n Valor do atributo: %.2f km²\n", Cidade2, Area2);
   if (Area > Area2)
   {
    printf("Resultado da comparação: Carta 1 venceu.\n");
   } else if (Area < Area2)
   {
      printf("Resultado da comparação: Carta 2 venceu.\n");
   } else printf("Houve um empate.\n");
      break;

      case 4: printf("\n* Atributo escolhido: PIB *\n");
   printf(" Carta 1:\n Cidade: %s\n Valor do atributo: %.2f bilhões de reais\n", Cidade, PIB);
   printf(" Carta 2:\n Cidade: %s\n Valor do atributo: %.2f bilhões de reais\n", Cidade2, PIB2);
   if (PIB > PIB2)
   {
    printf("Resultado da comparação: Carta 1 venceu.\n");
   } else if (PIB < PIB2)
   {
      printf("Resultado da comparação: Carta 2 venceu.\n");
   } else printf("Houve um empate.\n");
      break;

      case 5: printf("\n* Atributo escolhido: Pontos Turísticos *\n");
   printf(" Carta 1:\n Cidade: %s\n Valor do atributo: %d\n", Cidade, Turisticos);
   printf(" Carta 2:\n Cidade: %s\n Valor do atributo: %d\n", Cidade2, Turisticos2);
   if (Turisticos > Turisticos2)
   {
    printf("Resultado da comparação: Carta 1 venceu.\n");
   } else if (Turisticos < Turisticos2)
   {
      printf("Resultado da comparação: Carta 2 venceu.\n");
   } else printf("Houve um empate.\n");
      break;
   
      case 6: printf("\n* Atributo escolhido: Densidade Populacional *\n");
      printf(" Carta 1:\n Cidade: %s\n Valor do atributo: %.2f hab/km²\n", Cidade, Densidade);
      printf(" Carta 2:\n Cidade: %s\n Valor do atributo: %.2f hab/km²\n", Cidade2, Densidade2);
      if (Densidade < Densidade2)
      {
       printf("Resultado da comparação: Carta 1 venceu.\n");
      } else if (Densidade > Densidade2)
      {
         printf("Resultado da comparação: Carta 2 venceu.\n");
      } else printf("Houve um empate.\n");
         break;

         case 7: printf("\n* Atributo escolhido: PIB Per Capita *\n");
         printf(" Carta 1:\n Cidade: %s\n Valor do atributo: %f\n", Cidade, perCapita);
         printf(" Carta 2:\n Cidade: %s\n Valor do atributo: %f\n", Cidade2, perCapita2);
         if (perCapita > perCapita2)
         {
          printf("Resultado da comparação: Carta 1 venceu.\n");
         } else if (perCapita < perCapita2)
         {
            printf("Resultado da comparação: Carta 2 venceu.\n");
         } else printf("Houve um empate.\n");
            break;

   default: printf("Opção inválida.\n");
      break;
   }

   return 0;

}