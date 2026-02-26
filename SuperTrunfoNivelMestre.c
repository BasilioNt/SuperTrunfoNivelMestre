#include <stdio.h>

int main() {
    
    char pais1[50] = "Brasil", pais2[50] = "Russia";
    float pop1 = 230000000, pop2 = 143000000;
    float area1 = 8516000, area2 = 17100000; 
    float pib1 = 12000000000, pib2 = 213000000000;
    int pontur1 = 180, pontur2 = 200;
    float dens1 = 27.01, dens2 = 8.36;
    

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    char *nomeAtributo1, *nomeAtributo2;

   
    printf("### Escolha o primeiro atributo: ###\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Atribuição do primeiro valor baseada na escolha
    switch(opcao1) {
        case 1: valor1_carta1 = pop1; valor1_carta2 = pop2; nomeAtributo1 = "Populacao";
        break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; nomeAtributo1 = "Area";
        break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; nomeAtributo1 = "PIB";
        break;
        case 4: valor1_carta1 = pontur1; valor1_carta2 = pontur2; nomeAtributo1 = "Pontos Turisticos";
        break;
        case 5: valor1_carta1 = dens1; valor1_carta2 = dens2; nomeAtributo1 = "Densidade";
        break;
        default: printf("Opcao invalida!");
        return 0;
    }

    // Menu 2: Dinâmico (não mostra a opção já escolhida)
    printf("#### Escolha o segundo atributo (diferente do primeiro): ###\n");
    if(opcao1 != 1){
        printf("1. Populacao\n");
    }
    if(opcao1 != 2){
        printf("2. Area\n");
    }
    if(opcao1 != 3){
        printf("3. PIB\n");
    }
    if(opcao1 != 4){
        printf("4. Pontos Turisticos\n");
    }
    if(opcao1 != 5){
        printf("5. Densidade Demografica\n");
    }
    printf("Opcao: ");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2) {
        printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Atribuição do segundo valor
    switch(opcao2) {
        case 1: valor2_carta1 = pop1; valor2_carta2 = pop2; nomeAtributo2 = "Populacao";
        break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; nomeAtributo2 = "Area";
        break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; nomeAtributo2 = "PIB";
        break;
        case 4: valor2_carta1 = pontur1; valor2_carta2 = pontur2; nomeAtributo2 = "Pontos Turisticos";
        break;
        case 5: valor2_carta1 = dens1; valor2_carta2 = dens2; nomeAtributo2 = "Densidade";
        break;
        default: printf("Opcao invalida!");
        return 0;
    }

    // Lógica de Comparação com Operador Ternário
    // Nota: Para densidade (opção 5), o menor valor vence. Invertemos a lógica na soma se necessário.
    float pontos1 = (opcao1 == 5) ? (valor1_carta1 < valor1_carta2 ? 1 : 0) : (valor1_carta1 > valor1_carta2 ? 1 : 0);
    pontos1 += (opcao2 == 5) ? (valor2_carta1 < valor2_carta2 ? 1 : 0) : (valor2_carta1 > valor2_carta2 ? 1 : 0);

    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Exibição dos Resultados
    printf("***_### RESULTADO DA COMPARACAO ###_***\n");
    printf("Paises: %s X %s\n", pais1, pais2);
    printf("Atributo 1 (%s): %.2f X %.2f\n", nomeAtributo1, valor1_carta1, valor1_carta2);
    printf("Atributo 2 (%s): %.2f X %.2f\n", nomeAtributo2, valor2_carta1, valor2_carta2);
    printf("Soma Total: %.2f X %.2f\n", soma1, soma2);

    // Vencedor Final
    if (soma1 > soma2) {
        printf("*** VENCEDOR: %s! ***\n", pais1);
    } else if (soma2 > soma1) {
        printf("*** VENCEDOR: %s! ***\n", pais2);
    } else {
        printf("### Empate! ###\n");
    }

    return 0;
}
