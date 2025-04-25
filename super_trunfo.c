#include <stdio.h>

int main(){

    //carta 1 
    //declaração de variaveis
    char Estado[9];
    char Cod_Carta[4];
    char Cidade[59];   //A cidade com o nome mais longo do mundo tem 58 letras
    int Populacao;
    float Area;
    float PIB;
    int Numero_turismo;

    //entrada de valores
    printf("Digite a letra representante de seu estado! (de 'A' a 'H') ");
    scanf("%c", &Estado);
    
    printf("Qual o código de sua carta? (Letra do seu estado + codigo da carta) ");
    scanf("%s", &Cod_Carta);

    printf("Digite o nome da sua cidade! ");
    scanf("%s", &Cidade);

    printf("Quantos habitantes tem essa cidade? ");
    scanf("%i", &Populacao);

    printf("Qual a área da cidade em km²? ");
    scanf("%f", &Area);

    printf("Digite o PIB da sua cidade ");
    scanf("%f", &PIB);

    printf("Quantos pontos turisticos tem sua cidade? ");
    scanf("%d", &Numero_turismo);

    //carta 2
    //declaração de variaveis
    char Estado_2[9];
    char Cod_Carta_2[4];
    char Cidade_2[59];   
    int Populacao_2;
    float Area_2;
    float PIB_2;
    int Numero_turismo_2;

    //entrada de valores
    printf("Agora vamos preencher a sua segunda carta\n");
    printf("Digite a letra representante de seu estado! (de 'A' a 'H') ");
    scanf("%c", &Estado_2);
    
    printf("Qual o código de sua carta? (Letra do seu estado + codigo da carta) ");
    scanf("%s", &Cod_Carta_2);

    printf("Digite o nome da sua cidade! ");
    scanf("%s", &Cidade_2);

    printf("Quantos habitantes tem essa cidade? ");
    scanf("%d", &Populacao_2);

    printf("Qual a área da cidade em km²? ");
    scanf("%f", &Area_2);

    printf("Digite o PIB da sua cidade ");
    scanf("%f", &PIB_2);

    printf("Quantos pontos turisticos tem sua cidade? ");
    scanf("%d", &Numero_turismo_2);

    //impressão das cartas
    printf("Carta 1:\n");
    printf("Estado: %c \n", Estado);
    printf("Código: %s \n", Cod_Carta);
    printf("Nome da cidade: %s \n", Cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %f km² \n", Area);
    printf("PIB: %f bilhões de reais \n", PIB);
    printf("Número de pontos turisticos: %d \n", Numero_turismo);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c \n", Estado_2);
    printf("Código: %s \n", Cod_Carta_2);
    printf("Nome da cidade: %s \n", Cidade_2);
    printf("População: %d \n", Populacao_2);
    printf("Área: %f km² \n", Area_2);
    printf("PIB: %f bilhões de reais \n", PIB_2);
    printf("Número de pontos turisticos: %d \n", Numero_turismo_2);

    return 0;
}