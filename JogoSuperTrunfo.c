#include <stdio.h>

int main (){
	
	
	//variaveis da carta 1 °3°
	char estado1;
	char codigo_carta1 [4];
	char nome_cidade1 [26];
	unsigned long int populacao1;
	float area1;
	float pib1;
	int qt_pontos_turisticos1;
	float DensidadePopulacional1;
	float PIBperCapita1;
	
		
	//variaveis da carta 2 °3°
	char estado2;
	char codigo_carta2 [4];
	char nome_cidade2 [26];
	unsigned long int populacao2;
	float area2;
	float pib2;
	int qt_pontos_turisticos2;
	float DensidadePopulacional2;
	float PIBperCapita2;
	

	//variaveis para o resultado da comparação entre as cartas
	unsigned long int resultPopu;
	float resultArea;
	float resultPib;
	int resultadoPtTuristicos;
	float resultDensiPopu;
	float resultPpC;
	float superpoder1, superpoder2, resultSP;
	
	
	
	//pedindo para o usuário realizar tal ação e o scanf armazená-la :)
	//carta 1
	printf("Insira a seguir as informações para a Carta 1! \n\n");
	
	printf("Digite uma letra de A a H para representar o Estado \n");
	scanf(" %c", &estado1);
	
	printf("Digite a letra do Estado seguida de um número de 01 a 04. ex: A03 \n");
	scanf("%s", codigo_carta1);
	
	printf("Digite o nome da cidade \n");
	scanf("%s", nome_cidade1);
	
	printf("Digite o número de habitantes da cidade \n");
	scanf("%lu", &populacao1);
	
	printf("Digite a área da cidade em quilômetros quadrados \n");
	scanf("%f", &area1);
	
	printf("Digite o PIB da cidade \n");
	scanf("%f", &pib1);
	
	printf("Informe quantos pontos turísticos têm na cidade \n");
	scanf("%d", &qt_pontos_turisticos1);
	printf("\n\n\n");
	
	
	//pedindo para o usuário realizar tal ação e o scanf armazená-la :)
	//carta 2
	printf("Agora insira a seguir as informações para a carta 2! \n\n");
	
	printf("Digite uma letra de A a H para representar o Estado \n");
	scanf(" %c", &estado2);
	
	printf("Digite a letra do Estado seguida de um número de 01 a 04. ex: A03 \n");
	scanf("%s", codigo_carta2);
	
	printf("Digite o nome da cidade \n");
	scanf("%s", nome_cidade2);
	
	printf("Digite o número de habitantes da cidade \n");
	scanf("%lu", &populacao2);
	
	printf("Digite a área da cidade em quilômetros quadrados \n");
	scanf("%f", &area2);
	
	printf("Digite o PIB da cidade \n");
	scanf("%f", &pib2);
	
	printf("Informe quantos pontos turísticos têm na cidade \n");
	scanf("%d", &qt_pontos_turisticos2);
	printf("\n\n\n");
	
	//atribuindo resultado da pib em bilhoes
	pib1 *= 1e9;
	pib2 *= 1e9;
	
	
	//calculando a desidade populacional e o pib per capita carta 1
	DensidadePopulacional1 = populacao1 / area1;
	PIBperCapita1 = pib1 / populacao1;
	
	//calculando a desidade populacional e o pib per capita carta 2
	DensidadePopulacional2 = populacao2 / area2;
	PIBperCapita2 = pib2 / populacao2;
	
	
	//agora mandando aparecer na tela as informações inseridas '-'
	//carta 1
	printf("Carta 1 \n\n");
	printf("Estado: %c\n", estado1);
	printf("Código da Carta: %s\n", codigo_carta1);
	printf("Nome da Cidade: %s\n", nome_cidade1);
	printf("População: %d\n", populacao1);
	printf("Área: %f\n", area1);
	printf("PIB: %f\n", pib1);
	printf("Quantidade de Pontos Turísticos: %d\n\n", qt_pontos_turisticos1);
	
	printf("Densidade populacional: %.2f\n", DensidadePopulacional1);
	printf("PIB per Capita: %.2f\n", PIBperCapita1);
	printf("\n\n\n");
	
	//carta 2
	printf("Carta 2 \n\n");
	printf("Estado: %c\n", estado2);
	printf("Código da Carta: %s\n", codigo_carta2);
	printf("Nome da Cidade: %s\n", nome_cidade2);
	printf("População: %d\n", populacao2);
	printf("Área: %f\n", area2);
	printf("PIB: %f\n", pib2);
	printf("Quantidade de Pontos Turísticos: %d\n\n", qt_pontos_turisticos2);
	
	printf("Densidade populacional: %.2f\n", DensidadePopulacional2);
	printf("PIB per Capita: %.2f\n\n\n\n", PIBperCapita2);
	
	
	
	//comparação de quem é maior
	resultPopu = populacao1 > populacao2;
	resultArea = area1 > area2;
	resultPib = pib1 > pib2;
	resultadoPtTuristicos = qt_pontos_turisticos1 > qt_pontos_turisticos2;
	resultDensiPopu = DensidadePopulacional1 < DensidadePopulacional2; 
	resultPpC = PIBperCapita1 > PIBperCapita2;
	
	
	//calculando superpoder
	superpoder1 = populacao1 + area1 + pib1 + qt_pontos_turisticos1 
					+ PIBperCapita1 + (1.0 / DensidadePopulacional1);
	superpoder2 = populacao2 + area2 + pib2 + qt_pontos_turisticos2 
					+ PIBperCapita2 + (1.0 / DensidadePopulacional2);
	resultSP = superpoder1 > superpoder2;
	

	
	
	printf("Lembre-se: 1 = verdadeiro (sim), 0 = falso (não)! \n\n\n");
	
	printf("População: \n   Carta 1 venceu? %lu\n\n", resultPopu);
	printf("Área:\n   Carta 1 venceu? %.0f\n\n", resultArea);
	printf("PIB: \n   Carta 1 venceu? %.0f\n\n", resultPib);
	printf("Pontos Turísticos: \n   Carta 1 venceu? %d\n\n", resultadoPtTuristicos);
	printf("Densidade populacional: \n   Carta 1 venceu? %.0f\n\n", resultDensiPopu);
	printf("PIB per Capita: \n   Carta 1 venceu? %.0f\n\n", resultPpC);
	
	printf("Superpoder total da Carta 1: %.2f\n", superpoder1);
	printf("Superpoder total da Carta 2: %.2f\n\n", superpoder2);
	printf("Carta 1 venceu no Superpoder? %.0f\n", resultSP);
	
	return 0;
	
}
