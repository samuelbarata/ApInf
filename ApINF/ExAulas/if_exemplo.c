#include <stdio.h>
void if_exemplo(){
	int x;
	printf("Introduza um n\n");
	scanf("%d", &x);
	if (x>=0){
		printf("Digitopu um n positivo\n");
	}
	else{
		printf("Digitopu um n negativo\n");
	}
}
