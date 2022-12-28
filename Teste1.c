#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int ano_nascimento;
	int ano_atual;
	int resultado;
	
	printf("Hello World!\n");
	
	printf("Ano de nascimento?");
	scanf("%d",&ano_nascimento);
	
	printf("Ano de atual?");
	scanf("%d",&ano_atual);
	
	resultado=ano_atual-ano_nascimento;
	
	printf("Sua idade é: %d",resultado);
	
	return 0;
}
