#include <stdio.h>
    int main() {
        char codigoDaCidade1[4],codigoDaCidade2[4], nome1[50],nome2[50], estado1[50], estado2[50]; 
        float area1, area2, PIB1, PIB2, PIBpercapita1, PIBpercapita2, DensidadePopulacional1, DensidadePopulacional2, calculo1, calculo2, SuperPoder1, SuperPoder2;
        int  populacao1, populacao2, numeroDePontosTuristicos1, numeroDePontosTuristicos2;

        //Entrada da primeira cidade
        printf("Primeira cidade\n");
        printf("Nome da cidade e código:\n"); //Pergunta
        scanf("%49s %3s", nome1, codigoDaCidade1); //Lê o nome e o código

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
        printf("\n ---Dados da cidade 1 --- \n");
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
        printf("Segundo cidade\n");
        printf("Nome da cidade e código:\n"); //Pergunta
        scanf("%49s %3s", nome2, codigoDaCidade2); //Lê o nome e o código

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

        printf("\n ---Dados da cidade 2 --- \n"); //Imprime os dados da cidade
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

        printf("\n--- Comparações entre as cidades ---\n");
        printf("População: %d\n", populacao1 > populacao2);
        printf("Área: %d\n", area1 > area2);
        printf("PIB: %d\n", PIB1 > PIB2);
        printf("Pontos turísticos: %d\n", numeroDePontosTuristicos1 > numeroDePontosTuristicos2);
        printf("Densidade Populacional: %d\n", DensidadePopulacional1 > DensidadePopulacional2);
        printf("PIB per capita: %d\n", PIBpercapita1 > PIBpercapita2);
        printf("Super Poder: %d\n", SuperPoder1 > SuperPoder2);
    return 0;
}