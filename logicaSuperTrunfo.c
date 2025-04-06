#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Variáveis utilizadas para a Carta 1 e 2
    // Fiz dessa forma para economizar espaço e deixar o código mais fácil de compreender e compacto
    char codigo_da_cidade1[3], codigo_da_cidade2[3];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade_populacional1, pib_per_capita1, densidade_populacional2, pib_per_capita2;
    int pontos_turisticos1, pontos_turisticos2;
    

    // Abaixo segue o código para a solicitação de registro da carta número 1
    // onde uso o Printf para enviar a mensagem ao usuário pedindo as informações da carta 1 e o scanf para registrar elas 
    printf("Vamos começar o jogo registrando a Carta 1 \n");
    printf("Digite o codigo da cidade: \n");
    scanf("%3s", codigo_da_cidade1);
    printf("Digite o nome da cidade: \n");
    scanf(" %s", nome1);
    printf("Digite a população da sua cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a area de sua cidade: \n");
    scanf("%f", &area1);
    printf("Digite quantos pontos turísticos tem sua cidade: \n");
    scanf("%d", &pontos_turisticos1);
    printf("Digite o valor do pib: \n");
    scanf("%f", &pib1);

    // Abaixo fiz o código para calcular a densidade demografica junto com o PIB per capita da Carta 1
        densidade_populacional1 = populacao1 / area1;
        pib_per_capita1 = populacao1 / pib1;

    // Abaixo foi utilizado o mesmo código para registrar a carta 1 
    printf("Agora vamos registrar a Carta 2 \n");
    printf("Digite o codigo da segunda cidade: \n");
    scanf("%3s", codigo_da_cidade2);
    printf("Digite o nome da segunda cidade: \n");
    scanf(" %s", nome2);
    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a area de segunda cidade: \n");
    scanf("%f", &area2);
    printf("Digite o valor do pib da segunda cidade: \n");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos tem sua segunda cidade: \n");
    scanf("%d", &pontos_turisticos2);

    // Abaixo segue o calculo da densidade populacional e o pib per capita da carta 2
        densidade_populacional2 = populacao2 / area2;
        pib_per_capita2 = populacao2 / pib2;
    
    // Agora eu fiz o código usando o Printf para mostrar a Carta 1 e a Carta 2 para ficar mais fácil de visualizar e logo após usar o código para fazer a comparação
    printf("Agora vamos ver as duas cartas que você registrou no nosso jogo e logo após iremos ver o vencedor \n");
    // Usei o código abaixo para ficar melhor a visualização para o usuário que está jogando 
    printf("\n--------------\n\n");
    printf("-------- CARTA 1 -------- \n");
    printf("Código da Cidade: %s \n", codigo_da_cidade1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %f \n", area1);
    printf("Pib: %f \n", pib1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);
    printf("Desensidade Populacional: %f \n", densidade_populacional1);
    printf("Pib Per Capita: %f \n", pib_per_capita1);
    printf("\n--------------\n\n");
    printf("Oh uau a Carta 1 é bastante interessante será que ela vai ser a vencedora ? \n");
    printf("Agora vamos ver como é a Carta 2 \n");
    // Usei o código abaixo para ficar melhor a visualização para o usuário que está jogando
    printf("\n--------------\n\n");
    printf("-------- CARTA 2 -------- \n");
    printf("Código da Cidade: %s \n", codigo_da_cidade2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %f \n", area2);
    printf("Pib: %f \n", pib2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Desensidade Populacional: %f \n", densidade_populacional2);
    printf("Pib Per Capita: %f \n", pib_per_capita2);
    printf("\n--------------\n\n");
    printf("Essa carta tambem é incrível, vai ser difícil saber qual é a carta vencedora \n");
    printf("Agora podemos comparar as duas cartas e decidir o vencedor \n");
    printf("\n--------------\n\n");
    
    // Aqui foi utilizado o IF e o else para comparar cada atributo de cada carta registrada e nós dizer qual foi o melhor atributo de cada carta registrada
    if(populacao1 > populacao2){
        printf("A população da Carta 1 é maior a Carta 2 \n");
    }
    else{
        printf("A população da Carta 2 é maior que a Carta 1 \n");
    }

    if(area1 > area2){
        printf("A area da cidade da Carta 1 é maior que a Carta 2 \n");
    }
    else{
        printf("A area da cidade da Carta 2 é maior que a Carta 1 \n");
    }

    if(pib1 > pib2){
        printf("O pib da Carta 1 é maior que a Carta 2 \n");
    }
    else{
        printf("O pib da Carta 2 é maior que a Carta 1 \n");
    }

    if(pontos_turisticos1 > pontos_turisticos2){
        printf("A cidade da Carta 1 tem mais pontos turísticos \n");
    }
    else{
        printf("A cidade da Carta 2 tem mais pontos turísticos \n");
    }

    if(densidade_populacional1 < densidade_populacional2){
        printf("A densidade da carta 1 é menor que a Carta 2 \n");
    }
    else{
        printf("A densidade da Carta 2 é menor que a Carta 1 \n");
    }
    if(pib_per_capita1 > pib_per_capita2){
        printf("O Pib per capita da Carta 1 é maior que a Carta 2 \n");
    }
    else{
        printf("O pib per capita da Carta 2 é mairo que a Carta 1 \n");
    }
    
    printf("\n--------------\n\n");
    // Aqui no final fiz uma layout para ficar mais claro qual foi a carta ganhadora usando a população como o atributo de vitória 
    printf("-------- Resultado -------- \n");

    if(populacao1 > populacao2){
        printf("A Carta 1 é a Vencedora, meus Parabéns \n");
        printf("Comparação de cartas (Atributo: População) \n");
        printf("Carta 1 - %s: %d \n", nome1, populacao1);
       
    }
    else{
        printf("A carta 2 é a Vencedora, meus Parabéns \n");
        printf("Comparação de cartas (Atributo: População) \n");
        printf("Carta 2 - %s: %d \n", nome2, populacao2);
    }


    return 0;
}