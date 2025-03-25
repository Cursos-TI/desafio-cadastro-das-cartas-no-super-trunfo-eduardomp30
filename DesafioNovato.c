# include <stdio.h>




int main(){

char estado1, estado2;                                                  // Letra que representa um dos oitos estados.
char codigo1[10], codigo2[10];                                          // Número que segue o estado, uma especíe de "Bloco" de 01 até 04.
char nome_da_cidade1[50], nome_da_cidade2[50];                          // Nome da cidade ( preferencia para cidade sem nome composto.)
int populacao1, populacao2;                                             // Quantidade de habitantes da cidade escolhida.
int numero_de_pontos_turisticos1, numero_de_pontos_turisticos2;         // Quantidade de pontos turísticos dessa cidade.
float km1, km2;                                                         // Área da cidade em formato de quilometro.
float pib1, pib2;                                                       // Produto interno bruto ( PIB ) da cidade.

//Dados da primeira Carta

printf("Dados da primeira Carta!\n");

printf("Digite um Estado:\n");
scanf("%c", &estado1);

printf("Código:\n");
scanf("%s", &codigo1);

printf("Nome da Cidade:\n");
scanf("%s", &nome_da_cidade1);

printf("População:\n");
scanf("%d", &populacao1);

printf("Área (em km²):\n");
scanf("%f", &km1);

printf("PIB:\n");
scanf("%f", &pib1);

printf("Número de Pontos Turísticos:\n");
scanf("%d", &numero_de_pontos_turisticos1);


//Dados da segunda Carta
printf("\nDados da segunda Carta!\n");

printf("Digite um Estado:\n");
scanf(" %c", &estado2);

printf("Código:\n");
scanf("%s", &codigo2);

printf("Nome da Cidade:\n");
scanf("%s", &nome_da_cidade2);

printf("População:\n");
scanf("%d", &populacao2);

printf("Área (em km²):\n");
scanf("%f", &km2);

printf("PIB:\n");
scanf("%f", &pib2);

printf("Número de Pontos Turísticos:\n");
scanf("%d", &numero_de_pontos_turisticos2);

printf("Carta 01!\n");
printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado1, codigo1, nome_da_cidade1);
printf("População: %d\nÁrea: %.3f\nPIB: %.3f\nNúmero de Pontos: %d\n", populacao1, km1, pib1, numero_de_pontos_turisticos1);


printf("\nCarta 2!\n");
printf("\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, nome_da_cidade2);
printf("População: %d\nÁrea: %.3f\nPIB: %.3f\nNúmero de Pontos: %d\n", populacao2, km2, pib2, numero_de_pontos_turisticos2);





return 0;





}