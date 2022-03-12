#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fat (int num){
	int fat = 1;
	
	for (int n = num; n > 1; n--){
		fat = fat * n;
	}
	return fat;
}


int main (){
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int numero, resultado;
	
	printf ("por favor digite o numero:");
	scanf("%d", &numero);
	
	resultado = fat(numero);
	
	printf("o resultado é igaul a :%d", resultado);
	
}

