#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado, estado2, codigo_carta[4], codigo_carta2[4], nome_cidade[51], nome_cidade2[51];
  int numero_habitantes, numero_habitantes2, pontos_turisticos, pontos_turisticos2;
  float area, area2, pib, pib2;

  // Área para entrada de dados

  printf("carta 1 - digite a letra que represente o estado: ");
  scanf(" %c", &estado);

  printf("carta 1 - digite o código da carta, ex: A01, B02... : ");
  scanf(" %s", codigo_carta);

  printf("carta 1 - digite o nome da cidade: ");
  scanf(" %[^\n]", nome_cidade);

  printf("carta 1 - digite o número de habitantes da cidade (não utilize ponto ou vírgulas!): ");
  scanf(" %d", &numero_habitantes);

  printf("carta 1 - digite a área em km² da cidade (não utilize vírgulas): ");
  scanf(" %f", &area);

  printf("carta 1 - digite o pib dessa cidade (não utilize vírgulas): ");
  scanf(" %f", &pib);

  printf("carta 1 - digite a quantidade de pontos turísticos dessa cidade: ");
  scanf(" %d", &pontos_turisticos);

  printf("carta 2 - digite a letra que represente o estado: ");
  scanf(" %c", &estado2);

  printf("carta 1 - digite o código da carta, ex: A01, B02... : ");
  scanf(" %s", codigo_carta2);

  printf("carta 2 - digite o nome da cidade: ");
  scanf(" %[^\n]", nome_cidade2);

  printf("carta 2 - digite o número de habitantes da cidade (não utilize ponto ou vírgulas!): ");
  scanf(" %d", &numero_habitantes2);

  printf("carta 2 - digite a área em km² da cidade (não utilize vírgulas): ");
  scanf(" %f", &area2);

  printf("carta 2 - digite o pib dessa cidade (não utilize vírgulas): ");
  scanf(" %f", &pib2);

  printf("carta 2 - digite a quantidade de pontos turísticos dessa cidade: ");
  scanf(" %d", &pontos_turisticos2);


  // Área para exibição dos dados da cidade

  printf("carta 1 :");
  printf("estado : %c\n", estado);
  printf("código da carta : %s\n", codigo_carta);
  printf("nome da cidade : %s\n", nome_cidade);
  printf("número de habitantes de %s : %d\n", nome_cidade, numero_habitantes);
  printf("área de %s : %f\n", nome_cidade, area);
  printf("pib de %s: %f\n", nome_cidade, pib);
  printf("quantidade de pontos turísticos de %s : %d\n", nome_cidade, pontos_turisticos);

  printf("carta 2 :");
  printf("estado : %c\n", estado2);
  printf("código da carta : %s\n", codigo_carta2);
  printf("nome da cidade : %s\n", nome_cidade2);
  printf("número de habitantes de %s : %d\n", nome_cidade, numero_habitantes2);
  printf("área de %s : %f\n", nome_cidade2, area2);
  printf("pib de %s: %f\n", nome_cidade2, pib2);
  printf("quantidade de pontos turísticos de %s : %d\n", nome_cidade2, pontos_turisticos2);
  
  return 0;
} 