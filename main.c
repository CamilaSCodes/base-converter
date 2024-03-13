#include <stdio.h>
#include <stdlib.h>
#include "converteBases.h"

int main(){
	int opcao;
	printf("----------------------------------------------------- \n");
	printf("|		  Conversor de Bases		    | \n");
	printf("----------------------------------------------------- \n");
	printf("| 						    |\n");
	printf("| [ 1 ] Decimal para Binario 			    |\n");
	printf("| [ 2 ] Decimal para Octal 			    |\n");
	printf("| [ 3 ] Decimal para Hexadecimal 		    |\n");
	printf("| [ 4 ] Binario para Decimal 			    |\n");
	printf("| [ 5 ] Octal para Decimal 			    | \n");
	printf("| [ 6 ] Hexadecimal para Decimal 		    |\n");
	printf("| [ 7 ] Octal para Binario 			    |\n");
	printf("| [ 8 ] Hexadecimal para Binario 		    |\n");
	printf("| [ 9 ] Binario para Octal 			    |\n");
	printf("| [ 10 ] Binario para Hexadecimal 		    |\n");
	printf("| [ 11 ] Octal para Hexadecimal 		    |\n");
	printf("| [ 12 ] Hexadecimal para Octal 		    |\n");
	printf("| [ 0 ] Sair 					    |\n");
	printf("| 						    |\n");
	printf("|---------------------------------------------------| \n");
	printf(" \n");
	printf("Insira o numero correspondente a conversao desejada: \n");
	scanf("%i",&opcao);
	while(opcao!=0){
		switch (opcao){
		case 1:
		;
			//Declaração de variáveis
      		int dec=0;

      		//Lê o decimal e chama a função
      		printf("\n");
      		printf("Insira o decimal \n");
			scanf("%i",&dec);
			converte_dec_bin(&dec);
		break;
		case 2:
		;
      		//Declaração de Variáveis
			int dec2;

			//Lê o decimal e chama a função
			printf("\n");
			printf("Insira o decimal \n");
			scanf("%i",&dec2);
			converte_dec_oct(&dec2);
		break;
		case 3:
		;
      		//Declaração de Variáveis
			int dec3;

			//Lê o decimal e chama a função
			printf("\n");
			printf("Insira o decimal \n");
			scanf("%i",&dec3);
			converte_dec_hex(&dec3);
		break;
		case 4:
		;
      		//Declaração de Variáveis
      		char bin[1000];

      		//Lê a string do binário e chama a função
      		printf("\n");
      		printf("Insira o binario \n");
			scanf("%s",bin);
			converte_bin_dec(bin);
		break;
		case 5:
		;
      		//Declaração de Variáveis
      		char oct[1000];

      		//Lê a string do octal e chama a função
      		printf("\n");
      		printf("Insira o octal \n");
			scanf("%s",oct);
			converte_oct_dec(oct);
		break;
		case 6:
		;
      		//Declaração de Variáveis
      		char hex[1000];

      		//Lê a string do hexadecimal e chama a função
      		printf("\n");
      		printf("Insira o hexadecimal \n");
			scanf("%s",hex);
			converte_hex_dec(hex);
		break;
		case 7:
		;
      		//Declaração de Variáveis
      		char oct2[1000];

      		//Lê a string do octal e chama a função
      		printf("\n");
      		printf("Insira o octal \n");
			scanf("%s",oct2);
			converte_oct_bin(oct2);
		break;
		case 8:
		;
      		//Declaração de Variáveis
      		char hex2[1000];

      		//Lê a string do hexadecimal e chama a função
      		printf("\n");
      		printf("Insira o hexadecimal \n");
			scanf("%s",hex2);
			converte_hex_bin(hex2);
		break;
		case 9:
		;
      		//Declaração de Variáveis
      		char bin2[1000];

      		//Lê a string do binário e chama a função
      		printf("\n");
      		printf("Insira o binario \n");
			scanf("%s",bin2);
			converte_bin_oct(bin2);
		break;
		case 10:
		;
      		//Declaração de Variáveis
      		char bin3[1000];

      		//Lê a string do binário e chama a função
      		printf("\n");
      		printf("Insira o binario \n");
			scanf("%s",bin3);
			converte_bin_hex(bin3);
		break;
		case 11:
		;
      		//Declaração de Variáveis
      		char oct3[1000];

      		//Lê a string do octal e chama a função
      		printf("\n");
      		printf("Insira o octal \n");
			scanf("%s",oct3);
			converte_oct_hex(oct3);
		break;
		case 12:
		;
      		//Declaração de Variáveis
      		char hex3[1000];

      		//Lê a string do hexadecimal e chama a função
      		printf("\n");
      		printf("Insira o hexadecimal \n");
			scanf("%s",hex3);
			converte_hex_oct(hex3);
		break;
		default:
			printf("Escolha uma opcao valida. \n");
        break;
		}
		printf("\n");
		printf("Insira o numero correspondente a conversao desejada: \n");
		scanf("%i",&opcao);
	}

	exit(0);
	system("pause");
	return 0;
}
