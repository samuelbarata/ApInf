//
//  ex4.c
//  ApInf
//
//  Created by Samuel Barata on 17/11/2017.
//  Copyright © 2017 Samuel Barata. All rights reserved.
//

#include <stdio.h>

int tex4(){
	char s,nome[255];
	unsigned int i;
	puts("Introduza o seu nome");
	gets(nome);
	puts("Introduza o seu sexo (M - Masculino; F - Feminino; O - Outro)");
	scanf("%c",&s);
	puts("Introduza a sua idade");
	scanf("%ud",&i);
	if (s=='F'&&i<25){
		puts("APTO");
	}
	else if(s!='F' && i>=25){
		puts("NAO APTO");
		printf("%s, voce nao foi aceite porque nao e do sexo feminino, nem tem a idade nessessaria", nome);
		return 0;
	}
	else if(s!='F'){
		puts("NAO APTO");
		printf("%s, voce nao foi aceite porque nao e do sexo feminino", nome);
		return 0;
	}
	else{
		puts("NAO APTO");
		printf("%s, voce nao foi aceite porque nao tem a idade necessaria", nome);
		return 0;
	}
    return 0;
}
