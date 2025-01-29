#include <stdio.h>
    int main() {
            char codigoDaCidade[4], nome[50]; 
            float area, PIB;
            int populaçao, numeroDePontosTuristicos;

            printf("Nome da cidade e código:\n");
            scanf("%s %s", nome, codigoDaCidade);

            printf("População:\n");
            scanf("%d", &populaçao);

            printf("Área:\n");
            scanf("%f", &area);

            printf("PIB:\n");
            scanf("%f", &PIB);

            printf("Número de pontos turísticos:\n");
            scanf("%d", &numeroDePontosTuristicos);

            printf("Nome da cidade: %s\nCódigo da cidade: %s\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos turísticos: %d", nome, codigoDaCidade, populaçao, area, PIB, numeroDePontosTuristicos);
    return 0;
}