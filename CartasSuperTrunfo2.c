#include <stdio.h>
    int main() {
        char codigoDaCidade1[4],codigoDaCidade2[4], nome1[50],nome2[50], estado1[50], estado2[50]; 
        float area1, area2, PIB1, PIB2, PIBpercapita1, PIBpercapita2, DensidadePopulacional1, DensidadePopulacional2, calculo1, calculo2, SuperPoder1, SuperPoder2;
        int  populacao1, populacao2, numeroDePontosTuristicos1, numeroDePontosTuristicos2;

        //Entrada da primeira cidade
        printf("Primeira cidade\n");
        printf("Nome da cidade e código:\n"); //Pergunta
        scanf("%49s %3s", nome1, codigoDaCidade1); //Lê o nome e o código

        printf("Estado:\n"); //Pergunta
        scanf("%s", estado1); //Lê o nome e o código

        printf("População:\n"); //Pergunta
        scanf("%d", &populacao1); //Lê o número da população

        printf("Área:\n"); //Pergunta
        scanf("%f", &area1); //Lê a área

        printf("PIB:\n"); //Pergunta
        scanf("%f", &PIB1); //Lê o PIB

        printf("Número de pontos turísticos:\n"); //Pergunta
        scanf("%d", &numeroDePontosTuristicos1);//Lê o número de pontos turísticos

        //Calculos da primeira cidade
        PIBpercapita1 = (float) populacao1 / PIB1 ; //Converte forçadamente a população para casas decimais (float) e divide pelo PIB
        DensidadePopulacional1 = (float) populacao1 / area1; //Converte forçadamente a população para casas decimais (float) e divide pela área
        calculo1 = DensidadePopulacional1 + PIBpercapita1; //Soma a Densidade Populacional e PIB per capita
        SuperPoder1 = (float) populacao1 + area1 + PIB1 + (float) numeroDePontosTuristicos1 + PIBpercapita1 - DensidadePopulacional1; //Calculo de todos os atributos numericos, exceto nome, código e estado

        //Resultado
        printf("\n --- Carta 1 --- \n");
        printf("Nome da cidade: %s\n", nome1);
        printf("Estado: %s\n", estado1);
        printf("Código da cidade: %s\n", codigoDaCidade1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.2f km\n", area1);
        printf("PIB: %.2f bilhões\n", PIB1);
        printf("Pontos turísticos: %d\n", numeroDePontosTuristicos1);
        printf("PIB per capita: %.2f\n", PIBpercapita1); 
        printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional1);
        printf("Calculo entre Densidade Populacional e PIB per capita: %.2f\n", calculo1);
        printf("Super Poder: %.2f\n", SuperPoder1);
        
        //Entrada da segunda cidade
        printf("\nSegunda cidade\n");
        printf("Nome da cidade e código:\n"); //Pergunta
        scanf("%49s %3s", nome2, codigoDaCidade2); //Lê o nome e o código

        printf("Estado:\n"); //Pergunta
        scanf("%49s", estado2); //Lê o nome e o código

        printf("População:\n"); //Pergunta
        scanf("%d", &populacao2); //Lê o número da população

        printf("Área:\n"); //Pergunta
        scanf("%f", &area2); //Lê a área

        printf("PIB:\n"); //Pergunta
        scanf("%f", &PIB2); //Lê o PIB

        printf("Número de pontos turísticos:\n"); //Pergunta
        scanf("%d", &numeroDePontosTuristicos2);//Lê o número de pontos turísticos

        PIBpercapita2 = (float) populacao2 / PIB2 ; //Converte forçadamente a população para casas decimais (float) e divide pelo PIB
        DensidadePopulacional2 = (float) populacao2 / area2; //Converte forçadamente a população para casas decimais (float) e divide pela área
        calculo2 = DensidadePopulacional2 + PIBpercapita2; //Soma a Densidade Populacional e PIB per capita
        SuperPoder2 = (float) populacao2 + area2 + PIB2 + (float) numeroDePontosTuristicos2 + PIBpercapita2 - DensidadePopulacional2; //Calculo de todos os atributos numericos, exceto nome, código e estado

        printf("\n --- Carta 2 --- \n"); //Imprime os dados da cidade
        printf("Nome da cidade: %s\n", nome2);
        printf("Estado: %s\n", estado2);
        printf("Código da cidade: %s\n", codigoDaCidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km\n", area2);
        printf("PIB: %.2f bilhões\n", PIB2);
        printf("Pontos turísticos: %d\n", numeroDePontosTuristicos2);
        printf("PIB per capita: %.2f\n", PIBpercapita2); 
        printf("Densidade Populacional: %.2f hab/km2\n", DensidadePopulacional2);
        printf("Calculo entre Densidade Populacional e PIB per capita: %.2f\n", calculo2);
        printf("Super Poder: %.2f\n", SuperPoder2);

        int opcao1, opcao2; //Adicionei as opções para usar no switch
        float valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0; //Valores pra poder fazer a comparação

        printf("\n--- Comparações entre as cidades ---\n"); //Introdução do Menu
        printf("Escolha o primeiro atributo a ser comparado:\n"); //Menu com as opções abaixo
        printf("1. População.\n");
        printf("2. Área.\n");
        printf("3. PIB.\n");
        printf("4. Número de Pontos Turísticos.\n");
        printf("5. Densidade Populacional.\n");
        scanf("%d", &opcao1); //Aqui você coloca a opção que desejar
        
        printf("Primeiro Atributo - ");
        
        switch (opcao1) //As opções do primeiro atributo
        {case 1: printf("População:\n");
        valor1 = populacao1; valor2 = populacao2;
            break;
        case 2: printf("Área:\n");
        valor1 = area1; valor2 = area2;
            break;
        case 3: printf("PIB:\n");
        valor1 = PIB1; valor2 = PIB2;
            break;
        case 4: printf("Número de Pontos Turísticos:\n");
        valor1 = numeroDePontosTuristicos1; valor2 = numeroDePontosTuristicos2;
            break;
        case 5: printf("Densidade Populacional:\n");
        valor1 = DensidadePopulacional1; valor2 = DensidadePopulacional2;
            break;
        default: printf("Opção inválida, tente novamente.\n"); return 1; //return 1 é para caso tenha colocado o número errado, e aí ele volta de novo com a mesma pergunta
        }

        printf("%s - %.2f.\n", nome1, valor1); //Após escolher o atributo para comparar, aqui vai mostrar o valor do atributo de cada cidade tem
        printf("%s - %.2f.\n", nome2, valor2);

        do {
        printf("Escolha o segundo atributo a ser comparado (diferente do primeiro):\n");
        scanf("%d", &opcao2);
        } while (opcao1 == opcao2); //O do-while é para o jogador não escolher o mesmo atributo mais uma vez, fazendo a pergunta de novo

        printf("\nSegundo Atributo - ");

        switch (opcao2) //As opções do segundo atributo
        {case 1: printf("População:\n");
        valor3 = populacao1; valor4 = populacao2;
            break;
        case 2: printf("Área:\n");
        valor3 = area1; valor4 = area2;
            break;
        case 3: printf("PIB:\n");
        valor3 = PIB1; valor4 = PIB2;
            break;
        case 4: printf("Número de Pontos Turísticos:\n");
        valor3 = numeroDePontosTuristicos1; valor4 = numeroDePontosTuristicos2;
            break;
        case 5: printf("Densidade Populacional:\n");
        valor3 = DensidadePopulacional1; valor4 = DensidadePopulacional2;
            break;
        default: printf("Opção inválida, tente novamente.\n"); return 1;
        }

        printf("%s - %.2f.\n", nome1, valor3); //Aqui vai mostrar o nome das duas cidades e o valor do segundo atributo escolhido
        printf("%s - %.2f.\n", nome2, valor4);

        printf("\nResultado do primeiro atributo: "); //Aqui mostra o resultado do primeiro atributo escolhido pelo jogador

        if (opcao1 == 5) { //Se escolhida a Densidade Demográfica essa regra ser executada, o menor valor vence
            if (valor1 < valor2) {
            printf("Carta 1 venceu!\n");
            } 
            else if (valor1 > valor2){
                printf("Carta 2 venceu!\n");
            }
            else{
                printf("Empate!\n");
            }
        }
        else { //Se for qualquer outro atributo, tirando Densidade Demográfica, a regra é o maior valor vence
            if (valor1 > valor2) {
                printf("Carta 1 venceu!\n");
            }
            else if (valor1 < valor2) {
                printf("Carta 2 venceu!\n");
            }
            else {
            printf("Empate!\n");
            }
        }
        printf("\nResultado do segundo atributo: "); //Aqui mostra o resultado do segundo atributo escolhido pelo jogador

        if (opcao2 == 5) { //Se escolhida a Densidade Demográfica essa regra ser executada, o menor valor vence
            if (valor3 < valor4) {
            printf("Carta 1 venceu!\n");
            } 
            else if (valor3 > valor4){
                printf("Carta 2 venceu!\n");
            }
            else {
                printf("Empate!\n");
            }
        }
        else { //Se for qualquer outro atributo, tirando Densidade Demográfica, a regra é o maior valor vence
            if (valor3 > valor4) {
                printf("Carta 1 venceu!\n");
            }
            else if (valor3 < valor4) {
                printf("Carta 2 venceu!\n");
            }
            else {
            printf("Empate!\n");
            }
        }

        float somaCidade1 = valor1 + valor3; //Aqui ocorre a soma da primeira cidade
        float somaCidade2 = valor2 + valor4; // Aqui ocorre a soma da segunda cidade

        printf("\n --- Resultado final --- \n");
        printf("\n%s: %.2f.\n", nome1, somaCidade1); //Mostra o nome da primeira cidade e o resultado da soma
        printf("%s: %.2f.\n", nome2, somaCidade2); //Mostra o nome da segunda cidade e o resultado da soma
        printf("Resultado: "); //Aqui vem o resultado

        if (somaCidade1 == somaCidade2) {
            printf("Empate!\n");
        }
        else if (somaCidade1 > somaCidade2) {
            printf("%s venceu!\n", nome1);
        }
        else {
            printf("%s venceu!\n", nome2);
        }

    return 0;
}