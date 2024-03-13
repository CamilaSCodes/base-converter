#ifndef converteBases_h
#define converteBases_h
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void converte_dec_bin(int *n){
	int binario[1000],i=0;

	/* Divide o número por 2 e guarda em um vetor
	de posição i. Enquanto o número for diferente de 0,
	o laço será repetido. */
	if(*n==0){
		printf("0");
	}
	else{
		while(*n!=0){
		binario[i]=*n%2;
		*n=*n/2;
		i++;
		}
	}
	i--;
	printf("\n");

	// Mostra o vetor com os restos ao contrário
	printf("Decimal convertido pra binario: \n");
	while(i>=0){
		printf("%i ",binario[i]);
		i--;
	}
	printf("\n");
}

void converte_dec_oct(int *n){
	int octal[1000],i=0;

	/* Divide o número por 8 e guarda em um vetor
	de posição i. Enquanto o número for diferente de 0,
	o laço será repetido. */
	if(*n==0){
		printf("0");
	}
	else{
		while(*n!=0){
		octal[i]=*n%8;
		*n=*n/8;
		i++;
		}
	}
	i--;
	printf("\n");

	// Mostra o vetor com os restos ao contrário
	printf("Decimal convertido pra octal: \n");
	while(i>=0){
		printf("%i ",octal[i]);
		i--;
	}
	printf("\n");
}

void converte_dec_hex(int *n){
	int hexa[1000],i=0;

	/* Divide o número por 16 e guarda em um vetor
	de posição i. Enquanto o número for diferente de 0,
	o laço será repetido. */
	if(*n==0){
		printf("0");
	}
	else{
		while(*n!=0){
		hexa[i]=*n%16;
		*n=*n/16;
		i++;
		}
	}
	i--;

	/* Mostra o vetor com os restos ao contrário
	e a letra correspondente ao número. */
	printf("\n");
	printf("Decimal convertido pra hexadecimal: \n");
	while(i>=0){
		switch (hexa[i]){
		case 10:
      		printf("A ");
		break;
		case 11:
      		printf("B ");
		break;
		case 12:
      		printf("C ");
		break;
		case 13:
      		printf("D ");
		break;
		case 14:
      		printf("E ");
		break;
		case 15:
      		printf("F ");
		break;
		default:
            printf("%i ", hexa[i]);
        break;
		}
		i--;
	}
	printf("\n");
}

void converte_bin_dec(char b[]){
	int posicao2,i,posicao,binario[1000],soma=0,erro=0;
	posicao=strlen(b);
	posicao2=strlen(b);

	// Percorre a string e atribui o valor a um inteiro
	for(i=0;i<posicao;i++){
		if(b[i]=='0'){
			binario[i]=0;
		}
		else if(b[i]=='1'){
			binario[i]=1;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	// Multiplica o 0 ou 1 por 2 elevado a posição dele menos 1
	for(i=0;i<posicao2;i++){
		binario[i]=binario[i]*pow(2,posicao-1);
		soma=soma+binario[i];
		posicao--;
	}

	// Imprime a soma caso não seja inserido nenhum valor inválido
	printf("\n");
	if(erro!=0){
		printf("Os algarismos validos sao apenas os menores que 2. \n");
	}
	else{
		printf("Binario convertido para decimal: %i \n",soma);
	}
}

void converte_oct_dec(char o[]){
	int posicao2,i,posicao,octal[1000],soma=0,erro=0;
	posicao=strlen(o);
	posicao2=strlen(o);

	// Percorre a string e atribui o valor a um inteiro
	for(i=0;i<posicao;i++){
		if(o[i]=='0'){
			octal[i]=0;
		}
		else if(o[i]=='1'){
			octal[i]=1;
		}
		else if(o[i]=='2'){
			octal[i]=2;
		}
		else if(o[i]=='3'){
			octal[i]=3;
		}
		else if(o[i]=='4'){
			octal[i]=4;
		}
		else if(o[i]=='5'){
			octal[i]=5;
		}
		else if(o[i]=='6'){
			octal[i]=6;
		}
		else if(o[i]=='7'){
			octal[i]=7;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	/* Multiplica cada número menor que 8 por 8 elevado a posição dele menos 1 */
	for(i=0;i<posicao2;i++){
		octal[i]=octal[i]*pow(8,posicao-1);
		soma=soma+octal[i];
		posicao--;
	}

	// Imprime a soma caso não seja inserido nenhum valor inválido
	printf("\n");
	if(erro!=0){
		printf("Os algarismos validos sao apenas os menores que 8. \n");
	}
	else{
		printf("Octal convertido para decimal: %i \n",soma);
	}
}

void converte_hex_dec(char h[]){
	int posicao2,i,posicao,hexa[1000],soma=0,erro=0;
	posicao=strlen(h);
	posicao2=strlen(h);

	// Percorre a string e atribui o valor a um inteiro
	for(i=0;i<posicao;i++){
		if(h[i]=='0'){
			hexa[i]=0;
		}
		else if(h[i]=='1'){
			hexa[i]=1;
		}
		else if(h[i]=='2'){
			hexa[i]=2;
		}
		else if(h[i]=='3'){
			hexa[i]=3;
		}
		else if(h[i]=='4'){
			hexa[i]=4;
		}
		else if(h[i]=='5'){
			hexa[i]=5;
		}
		else if(h[i]=='6'){
			hexa[i]=6;
		}
		else if(h[i]=='7'){
			hexa[i]=7;
		}
		else if(h[i]=='8'){
			hexa[i]=8;
		}
		else if(h[i]=='9'){
			hexa[i]=9;
		}
		else if(h[i]=='a'||h[i]=='A'){
			hexa[i]=10;
		}
		else if(h[i]=='b'||h[i]=='B'){
			hexa[i]=11;
		}
		else if(h[i]=='c'||h[i]=='C'){
			hexa[i]=12;
		}
		else if(h[i]=='d'||h[i]=='D'){
			hexa[i]=13;
		}
		else if(h[i]=='e'||h[i]=='E'){
			hexa[i]=14;
		}
		else if(h[i]=='f'||h[i]=='F'){
			hexa[i]=15;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	/* Multiplica cada número menor que 16 por 16 elevado a posição dele menos 1 */
	for(i=0;i<posicao2;i++){
		hexa[i]=hexa[i]*pow(16,posicao-1);
		soma=soma+hexa[i];
		posicao--;
	}

	// Imprime a soma caso não seja inserido nenhum valor inválido
	printf("\n");
	if(erro!=0){
		printf("Os algarismos validos sao apenas os numeros menores que 10 e as letras de A a F. \n");
	}
	else{
		printf("Hexadecimal convertido para decimal: %i \n",soma);
	}
}

void converte_oct_bin(char o[]){
	int posicao,i,octal[1000],resto4=0,resto2=0,resto1=0,erro=0;
	posicao=strlen(o);

	// Percorre a string e atribui o valor a um inteiro
	for(i=0;i<posicao;i++){
		if(o[i]=='0'){
			octal[i]=0;
		}
		else if(o[i]=='1'){
			octal[i]=1;
		}
		else if(o[i]=='2'){
			octal[i]=2;
		}
		else if(o[i]=='3'){
			octal[i]=3;
		}
		else if(o[i]=='4'){
			octal[i]=4;
		}
		else if(o[i]=='5'){
			octal[i]=5;
		}
		else if(o[i]=='6'){
			octal[i]=6;
		}
		else if(o[i]=='7'){
			octal[i]=7;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	/* Verifica se o número contém 4, 2 e 1 individualmente.
	Se o número for menor que um deles, é porque não contém.
	Armazena numa variável e zera para que a próxima rodada
	não seja afetada. */
	printf("\n");
	if(erro!=0){
		printf("Os algarismos validos sao apenas os menores que 8. \n");
	}
	else{
		printf("Octal convertido para binario: \n");
		for(i=0;i<posicao;i++){
		if(octal[i]>=4){
			octal[i]=octal[i]-4;
			resto4++;
		}
		if(octal[i]>=2){
			octal[i]=octal[i]-2;
			resto2++;
		}
		if(octal[i]>0){
			octal[i]=octal[i]-1;
			resto1++;
		}
		printf("%i %i %i ",resto4,resto2,resto1);
		resto4=0;
		resto2=0;
		resto1=0;
	}
	}
	printf("\n");
}

void converte_hex_bin(char h[]){

	int posicao,i,hexa[1000],resto8=0,resto4=0,resto2=0,resto1=0,erro=0;
	posicao=strlen(h);

	//Percorre a string e atribui o valor a um inteiro
	for(i=0;i<posicao;i++){
		if(h[i]=='0'){
			hexa[i]=0;
		}
		else if(h[i]=='1'){
			hexa[i]=1;
		}
		else if(h[i]=='2'){
			hexa[i]=2;
		}
		else if(h[i]=='3'){
			hexa[i]=3;
		}
		else if(h[i]=='4'){
			hexa[i]=4;
		}
		else if(h[i]=='5'){
			hexa[i]=5;
		}
		else if(h[i]=='6'){
			hexa[i]=6;
		}
		else if(h[i]=='7'){
			hexa[i]=7;
		}
		else if(h[i]=='8'){
			hexa[i]=8;
		}
		else if(h[i]=='9'){
			hexa[i]=9;
		}
		else if(h[i]=='a'||h[i]=='A'){
			hexa[i]=10;
		}
		else if(h[i]=='b'||h[i]=='B'){
			hexa[i]=11;
		}
		else if(h[i]=='c'||h[i]=='C'){
			hexa[i]=12;
		}
		else if(h[i]=='d'||h[i]=='D'){
			hexa[i]=13;
		}
		else if(h[i]=='e'||h[i]=='E'){
			hexa[i]=14;
		}
		else if(h[i]=='f'||h[i]=='F'){
			hexa[i]=15;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	/* Verifica se o número contém 8, 4, 2 e 1 individualmente.
	Se o número for menor que um deles, é porque não contém.
	Armazena numa variável e zera para que a próxima rodada
	não seja afetada. */
	printf("\n");
	if(erro!=0){
		printf("Os algarismos validos sao apenas os numeros menores que 10 e as letras de A a F. \n");
	}
	else{
		printf("Hexadecimal convertido para binario: \n");
		for(i=0;i<posicao;i++){
		if(hexa[i]>=8){
			hexa[i]=hexa[i]-8;
			resto8++;
		}
		if(hexa[i]>=4){
			hexa[i]=hexa[i]-4;
			resto4++;
		}
		if(hexa[i]>=2){
			hexa[i]=hexa[i]-2;
			resto2++;
		}
		if(hexa[i]>0){
			hexa[i]=hexa[i]-1;
			resto1++;
		}
		printf("%i %i %i %i ",resto8,resto4,resto2,resto1);
		resto8=0;
		resto4=0;
		resto2=0;
		resto1=0;
	}
	}
	printf("\n");
}

void converte_bin_oct(char b[]){
	int i=0,binario[1000],soma[1000],erro=0,posicao,aux=0,contador=0;
	posicao=strlen(b)-1;

	// Percorre a string e atribui o valor a um inteiro
	for(i=0;i<=posicao;i++){
		if(b[i]=='0'){
			binario[i]=0;
		}
		else if(b[i]=='1'){
			binario[i]=1;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	/* Percorre o número de 3 em 3 posições, vendo se em cada posição tem 1.
	Se tiver, a potência de 2 referente a posição será somada ao auxiliar.
	O auxiliar é zerado toda rodada e o contador do vetor soma é somado a 1. */
	for(i=posicao;i>=0;i=i-3){
		aux=0;
		if(binario[i]==1){
			aux++;
		}
		if(binario[i-1]==1){
			aux=aux+2;
		}
		if(binario[i-2]==1){
			aux=aux+4;
		}
		soma[contador]=aux;
		contador++;
	}
	contador--;

	// Imprime a soma caso não seja inserido nenhum valor inválido
	printf("\n");
	if(erro>0){
		printf("Os algarismos validos sao apenas os menores que 2. \n");
	}
	else{
		printf("Binario convertido para octal:\n");
		while(contador>=0){
			printf("%i ",soma[contador]);
			contador--;
		}
	}
	printf("\n");
}

void converte_bin_hex(char b[]){
	int i=0,binario[1000],soma[1000],erro=0,posicao,aux=0,contador=0;
	posicao=strlen(b)-1;

	// Percorre a string e atribui o valor a um inteiro
	for(i=0;i<=posicao;i++){
		if(b[i]=='0'){
			binario[i]=0;
		}
		else if(b[i]=='1'){
			binario[i]=1;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	/* Percorre o número de 4 em 4 posições, vendo se em cada posição tem 1.
	Se tiver, a potência de 2 referente a posição será somada ao auxiliar.
	O auxiliar é zerado toda rodada e o contador do vetor soma é somado a 1. */
	for(i=posicao;i>=0;i=i-4){
		aux=0;
		if(binario[i]==1){
			aux++;
		}
		if(binario[i-1]==1){
			aux=aux+2;
		}
		if(binario[i-2]==1){
			aux=aux+4;
		}
		if(binario[i-3]==1){
			aux=aux+8;
		}
		soma[contador]=aux;
		contador++;
	}
	contador--;

	// Imprime a soma caso não seja inserido nenhum valor inválido
	printf("\n");
	if(erro>0){
		printf("Os algarismos validos sao apenas os menores que 2. \n");
	}
	else{
		printf("Binario convertido para hexadecimal: \n");
		while(contador>=0){
			switch (soma[contador]){
			case 10:
      			printf("A ");
			break;
			case 11:
      			printf("B ");
			break;
			case 12:
      			printf("C ");
			break;
			case 13:
      			printf("D ");
			break;
			case 14:
      			printf("E ");
			break;
			case 15:
      			printf("F ");
			break;
			default:
            	printf("%i ",soma[contador]);
        	break;
			}
		contador--;
		}
	}
	printf("\n");
}

void converte_oct_hex(char o[]){
	int posicao2,i,posicao,octal[1000],soma=0,erro=0,hexa[1000];
	posicao=strlen(o);
	posicao2=strlen(o);

	// Percorre a string e atribui o valor a um inteiro
	for(i=0;i<posicao;i++){
		if(o[i]=='0'){
			octal[i]=0;
		}
		else if(o[i]=='1'){
			octal[i]=1;
		}
		else if(o[i]=='2'){
			octal[i]=2;
		}
		else if(o[i]=='3'){
			octal[i]=3;
		}
		else if(o[i]=='4'){
			octal[i]=4;
		}
		else if(o[i]=='5'){
			octal[i]=5;
		}
		else if(o[i]=='6'){
			octal[i]=6;
		}
		else if(o[i]=='7'){
			octal[i]=7;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	/* Multiplica cada número menor que 8 por 8 elevado a posição dele menos 1 */
	for(i=0;i<posicao2;i++){
		octal[i]=octal[i]*pow(8,posicao-1);
		soma=soma+octal[i];
		posicao--;
	}
	i=0;

	/* Divide a soma por 16 e guarda em um vetor
	de posição i. Enquanto o número for diferente de 0,
	o laço será repetido. */
	if(soma==0){
		printf("0");
	}
	else{
		while(soma!=0){
		hexa[i]=soma%16;
		soma=soma/16;
		i++;
		}
	}
	i--;

	/* Mostra o vetor com os restos ao contrário
	e a letra correspondente ao número. */
	printf("\n");
	printf("Octal convertido pra hexadecimal: \n");
	while(i>=0){
		switch (hexa[i]){
		case 10:
      		printf("A ");
		break;
		case 11:
      		printf("B ");
		break;
		case 12:
      		printf("C ");
		break;
		case 13:
      		printf("D ");
		break;
		case 14:
      		printf("E ");
		break;
		case 15:
      		printf("F ");
		break;
		default:
            printf("%i ", hexa[i]);
        break;
		}
		i--;
	}
	printf("\n");
}

void converte_hex_oct(char h[]){
	int posicao2,i,posicao,hexa[1000],soma=0,erro=0,octal[1000];
	posicao=strlen(h);
	posicao2=strlen(h);

	// Percorre a string e atribui o valor a um inteiro
	for(i=0;i<posicao;i++){
		if(h[i]=='0'){
			hexa[i]=0;
		}
		else if(h[i]=='1'){
			hexa[i]=1;
		}
		else if(h[i]=='2'){
			hexa[i]=2;
		}
		else if(h[i]=='3'){
			hexa[i]=3;
		}
		else if(h[i]=='4'){
			hexa[i]=4;
		}
		else if(h[i]=='5'){
			hexa[i]=5;
		}
		else if(h[i]=='6'){
			hexa[i]=6;
		}
		else if(h[i]=='7'){
			hexa[i]=7;
		}
		else if(h[i]=='8'){
			hexa[i]=8;
		}
		else if(h[i]=='9'){
			hexa[i]=9;
		}
		else if(h[i]=='a'||h[i]=='A'){
			hexa[i]=10;
		}
		else if(h[i]=='b'||h[i]=='B'){
			hexa[i]=11;
		}
		else if(h[i]=='c'||h[i]=='C'){
			hexa[i]=12;
		}
		else if(h[i]=='d'||h[i]=='D'){
			hexa[i]=13;
		}
		else if(h[i]=='e'||h[i]=='E'){
			hexa[i]=14;
		}
		else if(h[i]=='f'||h[i]=='F'){
			hexa[i]=15;
		}
		else{
			printf("\n");
			printf("Seu algarismo possui um numero invalido. \n");
			erro++;
			break;
		}
	}

	/* Multiplica cada número menor que 16 por 16 elevado a posição dele menos 1 */
	for(i=0;i<posicao2;i++){
		hexa[i]=hexa[i]*pow(16,posicao-1);
		soma=soma+hexa[i];
		posicao--;
	}
	i=0;

	/* Divide o número por 8 e guarda em um vetor
	de posição i. Enquanto o número for diferente de 0,
	o laço será repetido. */
	if(soma==0){
		printf("0");
	}
	else{
		while(soma!=0){
		octal[i]=soma%8;
		soma=soma/8;
		i++;
		}
	}
	i--;
	printf("\n");

	// Mostra o vetor com os restos ao contrário
	printf("Hexadecimal convertido pra octal: \n");
	while(i>=0){
		printf("%i ",octal[i]);
		i--;
	}
	printf("\n");
}

#endif
