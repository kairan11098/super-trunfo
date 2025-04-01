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
   int opcao, opcao2;
   int resultado, resultado2;
 
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
   printf("Escolha o primeiro atributo a ser comparado:\n 1. Super Poder\n 2. População\n 3. Área\n 4. PIB\n 5. Pontos Turisticos\n 6. Densidade Populacional\n 7. PIB Per Capita\n");
   scanf("%d", &opcao);

// logica de comparação

switch (opcao)
{
case 1: printf("Você escolheu: Super Poder\n");
printf("Valor do atributo da carta 1: %.2f\n", SuperPoder);
printf("Valor do atributo da carta 2: %.2f\n", SuperPoder2);
resultado = SuperPoder > SuperPoder2 ? 1 : 0;
   break;

   case 2: printf("Você escolheu: População\n");
printf("Valor do atributo da carta 1: %d\n", Populacao);
printf("Valor do atributo da carta 2: %d\n", Populacao2 );
   resultado = Populacao > Populacao2 ? 1 : 0;
   break;

   case 3: printf("Você escolheu: Área\n");
   printf("Valor do atributo da carta 1: %.2f\n", Area);
   printf("Valor do atributo da carta 2: %.2f\n", Area2 );
   resultado = Area > Area2 ? 1 : 0;
   break;

   case 4: printf("Você escolheu: PIB\n");
   printf("Valor do atributo da carta 1: %.2f\n", PIB );
printf("Valor do atributo da carta 2: %.2f\n", PIB2 );
   resultado = PIB > PIB2 ? 1 : 0;
   break;

   case 5: printf("Você escolheu: Pontos Turisticos\n");
   printf("Valor do atributo da carta 1: %d\n", Turisticos);
printf("Valor do atributo da carta 2: %d\n", Turisticos2);
   resultado = Turisticos > Turisticos2 ? 1 : 0;
   break;

   case 6: printf("Você escolheu: Densidade Populacional\n");
   printf("Valor do atributo da carta 1: %.2f\n", Densidade);
printf("Valor do atributo da carta 2: %.2f\n", Densidade2);
   resultado = Densidade < Densidade2 ? 1 : 0;
   break;

   case 7: printf("Você escolheu: PIB Per Capita\n");
   printf("Valor do atributo da carta 1: %f\n", perCapita);
printf("Valor do atributo da carta 2: %f\n", perCapita2);
   resultado = perCapita > perCapita2 ? 1 : 0;
   break;

   default: printf("Opção inválida.\n");
      break;
   }

   printf("\n Escolha o segundo atributo a ser comparado:\n ATENÇÂO: Um atributo diferente do primeiro.\n 1. Super Poder\n 2. População\n 3. Área\n 4. PIB\n 5. Pontos Turisticos\n 6. Densidade Populacional\n 7. PIB Per Capita\n");
   scanf("%d", &opcao2);

   if (opcao == opcao2)
   {
      printf("Atributos iguais. Refaça as escolhas.\n");
   } else
   {
      switch (opcao2)
      {
      case 1: printf("Você escolheu: Super Poder\n");
      printf("Valor do atributo da carta 1: %.2f\n", SuperPoder);
      printf("Valor do atributo da carta 2: %.2f\n", SuperPoder2);
      resultado2 = SuperPoder > SuperPoder2 ? 1 : 0;
         break;
      
         case 2: printf("Você escolheu: População\n");
      printf("Valor do atributo da carta 1: %d\n", Populacao);
      printf("Valor do atributo da carta 2: %d\n", Populacao2 );
         resultado2 = Populacao > Populacao2 ? 1 : 0;
         break;
      
         case 3: printf("Você escolheu: Área\n");
         printf("Valor do atributo da carta 1: %.2f\n", Area);
         printf("Valor do atributo da carta 2: %.2f\n", Area2 );
         resultado2 = Area > Area2 ? 1 : 0;
         break;
      
         case 4: printf("Você escolheu: PIB\n");
         printf("Valor do atributo da carta 1: %.2f\n", PIB );
      printf("Valor do atributo da carta 2: %.2f\n", PIB2 );
         resultado2 = PIB > PIB2 ? 1 : 0;
         break;
      
         case 5: printf("Você escolheu: Pontos Turisticos\n");
         printf("Valor do atributo da carta 1: %d\n", Turisticos);
      printf("Valor do atributo da carta 2: %d\n", Turisticos2);
         resultado2 = Turisticos > Turisticos2 ? 1 : 0;
         break;
      
         case 6: printf("Você escolheu: Densidade Populacional\n");
         printf("Valor do atributo da carta 1: %.2f\n", Densidade);
      printf("Valor do atributo da carta 2: %.2f\n", Densidade2);
         resultado2 = Densidade < Densidade2 ? 1 : 0;
         break;
      
         case 7: printf("Você escolheu: PIB Per Capita\n");
         printf("Valor do atributo da carta 1: %f\n", perCapita);
      printf("Valor do atributo da carta 2: %f\n", perCapita2);
         resultado2 = perCapita > perCapita2 ? 1 : 0;
         break;
    default: printf("Opção inválida.\n");
      break;
    }
   }
    printf("\nCidade 1: %s\nCidade 2: %s\n", Cidade, Cidade2);
   if (resultado && resultado2){
printf ("Resultado da rodada: Carta 1 venceu!\n");
   } else if (resultado != resultado2) {
printf("Resultado da rodada: O jogo empatou!\n");
   }
 else {
printf("Resultado da rodada: Carta 2 venceu!\n");

 }  
   return 0;

}