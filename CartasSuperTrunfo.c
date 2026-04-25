#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado, estado2, codigo_carta[4], codigo_carta2[4], nome_cidade[51], nome_cidade2[51];
  int pontos_turisticos, pontos_turisticos2, resultado, cidade_vencedora;
  float area, area2, pib, pib2, densidade_pop1, densidade_pop2, pib_capita1, pib_capita2, superPoder1, superPoder2;
  unsigned long int numero_habitantes, numero_habitantes2;

  // Área para entrada de dados
  // Carta 1

  printf("carta 1 - digite uma letra de A a H para representar o estado : ");
  scanf(" %c", &estado);

  printf("carta 1 - digite o código da carta, ex: A01, B02... : ");
  scanf(" %s", codigo_carta);

  printf("carta 1 - digite o nome da cidade : ");
  scanf(" %[^\n]", nome_cidade);

  printf("carta 1 - digite o número de habitantes da cidade (não utilize ponto ou vírgulas!) : ");
  scanf(" %lu", &numero_habitantes);

  printf("carta 1 - digite a área em km² da cidade : ");
  scanf(" %f", &area);

  printf("carta 1 - digite o pib dessa cidade : ");
  scanf(" %f", &pib);

  printf("carta 1 - digite a quantidade de pontos turísticos dessa cidade : ");
  scanf(" %d", &pontos_turisticos);

  densidade_pop1 = (float) numero_habitantes / area;
  pib_capita1 = (float) pib / numero_habitantes;
  superPoder1 = (float) (numero_habitantes + area + pib + pontos_turisticos + pib_capita1) + (1/densidade_pop1);

  printf("---- // ----\n");
  printf("insira os dados da próxima carta\n");
  printf("---- // ----\n"); 

  // Carta 2

  printf("carta 2 - digite uma letra de A a H para representar o estado : ");
  scanf(" %c", &estado2);

  printf("carta 1 - digite o código da carta, ex: A01, B02... : ");
  scanf(" %s", codigo_carta2);

  printf("carta 2 - digite o nome da cidade : ");
  scanf(" %[^\n]", nome_cidade2);

  printf("carta 2 - digite o número de habitantes da cidade (não utilize ponto ou vírgulas!) : ");
  scanf(" %lu", &numero_habitantes2);

  printf("carta 2 - digite a área em km² da cidade : ");
  scanf(" %f", &area2);

  printf("carta 2 - digite o pib dessa cidade : ");
  scanf(" %f", &pib2);

  printf("carta 2 - digite a quantidade de pontos turísticos dessa cidade : ");
  scanf(" %d", &pontos_turisticos2);

	densidade_pop2 = (float) numero_habitantes2 / area2;
  pib_capita2 = (float) pib2 / numero_habitantes2; 
  superPoder2 = (float) (numero_habitantes2 + area2 + pib2 + pontos_turisticos2 + pib_capita2) + (1/densidade_pop2);

  // Área para exibição dos dados da cidade

  printf("Carta 1 :");
  printf("Estado: %c\n", estado);
  printf("Código da carta: %s\n", codigo_carta);
  printf("Nome da cidade: %s\n", nome_cidade);
  printf("Número de habitantes de %s: %lu\n", nome_cidade, numero_habitantes);
  printf("Área de %s: %.2f\n", nome_cidade, area);
  printf("Pib de %s: %.2f\n", nome_cidade, pib);
  printf("Quantidade de pontos turísticos de %s: %d\n", nome_cidade, pontos_turisticos);
  printf("Densidade populacional por km² de %s: %.2f\n", nome_cidade, densidade_pop1);
  printf("Pib per capita de %s: %.2f\n", nome_cidade, pib_capita1);

  printf("---- // ----\n");
  printf("carta 2\n");
  printf("---- // ----\n");


  printf("Carta 2 :\n");
  printf("Estado: %c\n", estado2);
  printf("Código da carta: %s\n", codigo_carta2);
  printf("Nome da cidade: %s\n", nome_cidade2);
  printf("Número de habitantes de %s: %lu\n", nome_cidade2, numero_habitantes2);
  printf("Área de %s: %.2f\n", nome_cidade2, area2);
  printf("Pib de %s: %.2f\n", nome_cidade2, pib2);
  printf("Quantidade de pontos turísticos de %s: %d\n", nome_cidade2, pontos_turisticos2);
  printf("Densidade populacional por km² de %s: %.2f\n", nome_cidade2, densidade_pop2);
  printf("Pib per capita de %s: %.2f\n", nome_cidade2, pib_capita2); 

  printf("---- // ----\n");
  printf("Comparação de Cartas\n");
  printf("---- // ----\n");

  resultado = numero_habitantes > numero_habitantes2;
  cidade_vencedora = 2 - resultado;
  printf("População: Carta %d venceu (%d)\n", cidade_vencedora, resultado);

  resultado = area > area2;
  cidade_vencedora = 2 - resultado;
  printf("Área: Carta %d venceu (%d)\n", cidade_vencedora, resultado);

  resultado = pib > pib2;
  cidade_vencedora = 2 - resultado;
  printf("PIB: Carta %d venceu (%d)\n", cidade_vencedora, resultado);

  resultado = pontos_turisticos > pontos_turisticos2;
  cidade_vencedora = 2 - resultado;
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", cidade_vencedora, resultado);

  resultado = densidade_pop1 < densidade_pop2;
  cidade_vencedora = 2 - resultado;
  printf("Densidade Populacional: Carta %d venceu (%d)\n", cidade_vencedora, resultado);

  resultado = pib_capita1 > pib_capita2;
  cidade_vencedora = 2 - resultado;
  printf("PIB per Capita: Carta %d venceu (%d)\n", cidade_vencedora, resultado);

  resultado = superPoder1 > superPoder2;
  cidade_vencedora = 2 - resultado;
  printf("Super Poder: Carta %d venceu (%d)\n", cidade_vencedora, resultado);

} 