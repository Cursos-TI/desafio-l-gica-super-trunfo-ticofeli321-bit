#include <stdio.h>

int main(){
//===============Entradas da carta 01===================================================
    int pontos,populacao;
    char nome[20],Estado,codigo[50];
    double PIB,Area,Densidade,PIBper,Super,Inverso;
//===============Valores das carta 01===================================================
    printf("===========Carta 01===============\n");
    printf("Digite o Estado da carta : ");
    scanf("%c", &Estado);

    printf("Digite o Codigo da carta : ");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nome);

    printf("Digite a População: ");
    scanf("%d", &populacao);

    printf("Digite a Area: ");
    scanf("%lf", &Area);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos);
//================Calculo de valores da carta 01==========================================
Densidade = (double) populacao / Area;
Inverso = (long double) Area / populacao;
PIBper = (double) (PIB * 1000000000.0) / populacao;
Super = (double) populacao + Area + pontos + PIB + Inverso;
//=================Entradas da carta 02====================================================
    int populacao2,pontos2;
    char nome2[20],Estado2,codigo2[50];
    double PIB2,Area2,Densidade2,PIBper2,Super2,Inverso2;
//=================Valores das carta 02====================================================
    printf("===========Carta 02============= n2\n");
    printf("Digite o Estado da carta : ");
    scanf(" %s", &Estado2);

    printf("Digite o Codigo da carta: ");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nome2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Area: ");
    scanf("%lf", &Area2);

    printf("Digite o PIB: ");
    scanf("%lf", &PIB2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);
//==================Calculo de valores da carta 02============================================
Densidade2 = (double) populacao2 / Area2;
Inverso2 = (long double) Area2 / populacao2;
PIBper2 = (double) (PIB2 * 1000000000.0) / populacao2;
Super2 = (double) populacao2 + Area2 + pontos2 + PIB2 + Inverso2;

//================Comparadores de valores cartas==============================================
int ResultadoPopulacao, ResultadoArea, ResultadoPontos, ResultadoDensidade, ResultadoPIB, ResultadoSuper, ResultadoPIBper;

    ResultadoPopulacao = populacao > populacao2;
    ResultadoArea = Area > Area2;
    ResultadoPIB = PIB > PIB2;
    ResultadoPontos = pontos > pontos2;
    ResultadoDensidade = Densidade < Densidade2;
    ResultadoPIBper = PIBper > PIBper2;
    ResultadoSuper = Super > Super2;
//==================Resultado da carta 01=====================================================
    printf("=============Carta 01============ \n");
    printf("Estado: %c\n", Estado);
    printf("Codigo da Carta: %c%s\n",Estado, codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Area: %.2fKm²\n", Area);
    printf("PIB: %.2f bilhoes de reais\n", PIB);
    printf("Numero de Pontos Turisticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f\n", Densidade);
    printf("PIB per Capita: %.2f reais\n", PIBper);
    printf("Super Poder: %lf\n", Super);
    printf("==================================\n");
//=================Resultado da carta 02======================================================
    printf("=============Carta 02=============\n");
    printf("Estado: %c\n", Estado2);
    printf("Codigo da Carta: %c%s\n",Estado2, codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2fKm²\n", Area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade2);
    printf("PIB per Capita: %.2f reais\n", PIBper2);
    printf("Super Poder: %lf\n", Super2);
    printf("==================================\n");
//=================Resultado das Comparaçoes===================================================
    printf("=========Comparação das Cartas=============\n");
    
    printf("Valor 1:Carta 1 vencedor\n");
    printf("Valor 0:Carta 2 vencedor\n");
    
    printf("População: %d\n", ResultadoPopulacao);
    printf("Area: %d\n", ResultadoArea);
    printf("PIB: %d\n",ResultadoPIB);
    printf("Pontos Turisticos: %d\n", ResultadoPontos);
    printf("Densidade Populacional: %d\n", ResultadoDensidade);
    printf("PIB per Capita: %d\n", ResultadoPIBper);
    printf("Super Poder: %d\n", ResultadoSuper);
    printf("============================================\n");
//================Comparação das cartas por atributo=============================================
    printf("========Comparação de atributos=============\n");
    if (populacao > populacao2)
    {
        printf("Atributo:População\n");
        printf("Carta 01 (%s) Venceu!\n",nome);
    }
    else
    {
        printf("Atributo:População\n");
        printf("Carta 02 (%s) Venceu!\n",nome2);
    }

    if (Area > Area2)
    {
        printf("Atributo:Área\n");
        printf("Carta 01 (%s) Venceu!\n",nome);
    }
    else
    {
        printf("Atributo:Área\n");
        printf("Carta 02 (%s) Venceu!\n",nome2);
    }

     if (PIB > PIB2)
    {
        printf("Atributo:PIB\n");
        printf("Carta 01 (%s) Venceu!\n",nome);
    }
    else
    {
        printf("Atributo:PIB\n");
        printf("Carta 02 (%s) Venceu!\n",nome2);
    }
    if (Densidade < Densidade2)
    {
        printf("Atributo:Densidade Populacional\n");
        printf("Carta 01 (%s)Venceu!\n",nome);
    }
    else
    {
        printf("Atributo:Densidade Populacional\n");
        printf("Carta 02 (%s) Venceu!\n",nome2);
    }
    if (PIBper > PIBper2)
    {
        printf("Atributo:PIB per capita\n");
        printf("Carta 01 (%s) Venceu!\n",nome);
    }
    else
    {
        printf("Atributo:PIB per capita\n");
        printf("Carta 02 (%s) Venceu!\n",nome2);
    }
//======================================================================            




}