#include <stdio.h>

int main(){

char estado1[50], estado2[50];         
char cod1[5], cod2[5];
char nome_da_cidade1[50], nome_da_cidade2[50];
int populacao1, populacao2;
int pontos_turisticos1, pontos_turisticos2;
float km1, km2;
float pib1, pib2;
float densidade1, densidade2;
float pibpc1, pibpc2;

//Dados da PRIMEIRA carta abaixo:

printf("Cadastro da primeira carta!\n");

printf("Estado:\n");
scanf("%s", &estado1);

printf("Código:\n");
scanf("%s", &cod1);

printf("Nome da Cidade:\n");
scanf("%s", &nome_da_cidade1);

printf("População;\n");
scanf("%d", &populacao1);

printf("Área (em km²):\n");
scanf("%f", &km1);

printf("PIB:\n");
scanf("%f", &pib1);

printf("Número de pontos Turísticos:\n");
scanf("%d", &pontos_turisticos1);

printf("Densidade Demográfica:\n");
scanf("%f", &densidade1);

printf(" PIB per Capita:\n");
scanf("%f", &pibpc1);


//Dados da SEGUNDA carta abaixo:

printf("\nCadastro da segunda carta!\n");

printf("Estado:\n");
scanf(" %s", &estado2);

printf("Código:\n");
scanf("%s", &cod2);

printf("Nome da Cidade:\n");
scanf("%s", &nome_da_cidade2);

printf("População;\n");
scanf("%d", &populacao2);

printf("Área (em km²):\n");
scanf("%f", &km2);

printf("PIB:\n");
scanf("%f", &pib2);

printf("Número de pontos Turísticos:\n");
scanf("%d", &pontos_turisticos2);

printf("Densidade Demográfica:\n");
scanf(" %f", &densidade2);

printf(" PIB per Capita:\n");
scanf("%f", &pibpc2);


//Descrição da Primeira carta.
printf("\nEstado: %s\n Código: %s\nNome da Cidade: %s\nPopulação: %d\n", estado1, cod1, nome_da_cidade1, populacao1);
printf("Área: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Demógrafica: %.2f\nPIB per Capita: %.2f\n", km1, pib1, pontos_turisticos1, densidade1, pibpc1);

//Descrição da Segunda carta.
printf("\nEstado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\n",estado2, cod2, nome_da_cidade2, populacao2);
printf("Área: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Demógrafica: %.2f\nPIB per Capita: %.2f\n", km2, pib2, pontos_turisticos2, densidade2, pibpc2);


return 0;

}

