#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1[] = "A";
char codigo1 [50] = "A01";
char nome1 [50] = "São paulo";
int populacao1 = 12325000;
float area1 = 1521.11;
float pib1 = 699.28;
int numero1 = 50;
  // Área para entrada de dados
printf("Carta 1: \n");
printf("Estado: %s \n", estado1);
printf("Código: %s \n", codigo1);
printf("Nome da cidade: %s \n", nome1);
printf("Populaçã0: %d \n", populacao1);
printf("Área: %2.f", area1);
printf(" km2 \n");
printf("PIB: %2.f", pib1);
printf(" bilhões de reais \n");
printf ("Numero de pontos turisticos: %d \n", numero1);
  // Área para exibição dos dados da cidade

return 0;
} 
