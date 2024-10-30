#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Variaveis de atributos
    char nomedacidade[20], nomedacidade2[20];
    unsigned int codigodacidade, codigodacidade2, populaçao, populaçao2, pontosturisticos, pontosturisticos2, pontos = 0, pontos2 = 0;
    float PIB, PIB2, area, area2, densidade, densidade2, PIBpercapita, PIBpercapita2;
    int opcao;

    printf ("Bem Vindo!\n");
    printf ("1.Inicar Jogo\n");
    printf ("2.Regras\n");
    printf ("3.Sair\n");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
        // Cadastro da Primeira Carta
    printf("Insira o Nome da Cidade\n");
    scanf(" %[^\n]%*c", &nomedacidade);

    printf("Insira o Código da Cidade\n");
    scanf(" %d", &codigodacidade);

    printf("Insira a População da Cidade\n");
    scanf(" %d", &populaçao);

    printf("Insira o N° de Pontos Turísticos da Cidade\n");
    scanf(" %d", &pontosturisticos);

    printf("Insira o PIB da Cidade\n");
    scanf(" %f", &PIB);

    printf("Insira a Área da Cidade\n");
    scanf(" %f", &area);

    // Calculo do PIB e Densidade Polulacional:

    PIBpercapita = PIB / (float) populaçao;
    densidade = (float) populaçao / area;

    // Exibição dos Dados das Cartas:

    printf("As Informações da Primeira Cidade São:\n Nome: %s\n Código: %d\n População: %d\n Pontos Turísticos: %d\n PIB: %f\n PIB per Capita: %f\n Área: %f\n Densidade Populacional: %f\n", nomedacidade, codigodacidade, populaçao, pontosturisticos, PIB, PIBpercapita, area, densidade);

    // Cadastro da Segunda Carta
    printf("Insira o Nome da Cidade\n");
    scanf(" %[^\n]%*c", &nomedacidade2);

    printf("Insira o Código da Cidade\n");
    scanf(" %d", &codigodacidade2);

    printf("Insira a População da Cidade\n");
    scanf(" %d", &populaçao2);

    printf("Insira o N° de Pontos Turísticos da Cidade\n");
    scanf(" %d", &pontosturisticos2);

    printf("Insira o PIB da Cidade\n");
    scanf(" %f", &PIB2);

    printf("Insira a Área da Cidade\n");
    scanf(" %f", &area2);
    
    // Calculo do PIB e Densidade populacional

    PIBpercapita2 = PIB2 / populaçao2;
    densidade2 = populaçao2 / area2;

    // Exibição das informações da segunda carta
    printf("As Informações da segunda Cidade São:\n Nome: %s\n Código: %d\n População: %d\n Pontos Turísticos: %d\n PIB: %f\n PIB per Capita: %f\n Área: %f\n Densidade Populacional: %f\n", nomedacidade2, codigodacidade2, populaçao2, pontosturisticos2, PIB2, PIBpercapita2, area2, densidade2);

    // Verificação de informações diferentes
    if (nomedacidade == nomedacidade2 || codigodacidade == codigodacidade2)
    {
        printf("As Cidades tem que ter nomes e codigos diferentes");
        return 0;
    }

    // Comparação de População
    if (populaçao == populaçao2)
        {
        printf("As cidades tem a mesma população\n");
        }
    else if (populaçao > populaçao2)
        {
        printf("%s tem população maior que %s\n", nomedacidade, nomedacidade2);
        pontos ++;
        }
    else if (populaçao < populaçao2)
        {
        printf("%s tem população maior que %s\n", nomedacidade2, nomedacidade);
        pontos2 ++;
        }

    // Comparação de pontos turisticos

    if (pontosturisticos == pontosturisticos2)
        {
        printf("As cidades tem a mesma quantidade de pontos turísticos\n");
        }
    else if (pontosturisticos > pontosturisticos2)
        {
        printf("%s tem mais pontos turisticos que %s\n", nomedacidade, nomedacidade2);
        pontos ++;
        }
    else if (pontosturisticos < pontosturisticos2)
        {
        printf("%s tem mais pontos turísticos que %s\n", nomedacidade2, nomedacidade);
        pontos2 ++;
        }

    // Comparação de PIB

    if (PIB == PIB2)
    {
        printf("As cidades tem o mesmo PIB\n");
    }
    else if (PIB > PIB2)
    {
    printf("%s tem PIB maior que %s\n", nomedacidade, nomedacidade2);
    pontos ++;
    }
    else if (PIB < PIB2)
    {
    printf("%s tem PIB maior que %s\n", nomedacidade2, nomedacidade);
    pontos2 ++;
    }

    // Comparação de Área

    if (area == area2)
    {
        printf("As cidades tem a mesma área\n");
    }
    else if (area > area2)
    {
    printf("%s tem área maior que %s\n", nomedacidade, nomedacidade2);
    pontos ++;
    }

    else if (area < area2)
    {
    printf("%s tem área maior que %s\n", nomedacidade2, nomedacidade);
    pontos2 ++;
    }

    // Comparação de PIB per capita

    if (PIBpercapita == PIBpercapita2)
    {
        printf("As Cidades Tem o mesmo PIB Per Capita\n");
    }
    else if (PIBpercapita > PIBpercapita2)
    {
        printf("%s Tem o PIB Per Capita Maior que %s\n", nomedacidade, nomedacidade2);
        pontos ++;
    }
    else if (PIBpercapita < PIBpercapita2)
    {
        printf("%s Tem o PIB Per Capita Maior que %s\n", nomedacidade2, nomedacidade);
        pontos2 ++;
    }
    
    // Comparação de Densidade

    if (densidade == densidade2)
    {
        printf("As Cidades tem a Mesma Densidade\n");
    }
    else if (densidade > densidade2)
    {
        printf("%s Tem Densidade menor que %s\n", nomedacidade2, nomedacidade);
        pontos2 ++;
    }
    else if (densidade < densidade2)
    {
        printf("%s Tem Densidade menor que %s\n", nomedacidade, nomedacidade2);
        pontos ++;
    } 

    // Comparação de pontos

    printf("Vamos aos Resultados Finais:\n");
    if (pontos == pontos2)
    {
        printf("Temos um empate, as duas cidades tem %d pontos. \n", pontos);
    } 
    else if(pontos > pontos2)
    {
        printf("%s é o vencedor com %d pontos!\n", nomedacidade, pontos);
    }
    else if(pontos < pontos2)
    {
    printf("%s é o vencedor com %d pontos!\n", nomedacidade2, pontos2);
    }

    printf("%s: %d pontos %s: %d pontos", nomedacidade, pontos, nomedacidade2, pontos2);
    return 0;
        break;
    case 2:
        printf ("No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte. Você vai inserir as informações de uma cidade, depois, você ou outro jogador vai inserir as informações de outra cidade. As duas serão comparadas automaticamente, a cidade que tiver mais pontos ganha.");
        break;
    case 3:
        printf ("Tchau");
        break;
    default:
    printf ("Invalido...\n Digite 1, 2 ou 3");
        break;
    }
    
}
