#include<stdio.h>
#include<stdlib.h>

int main (){
	
	int hora_cinema=20;
	int hora_atual=30;
	int hora_valid = hora_atual + 30;
	
	
	if(hora_cinema > hora_valid){
		printf("Passou o tempo limite");
	}else if(hora_atual < hora_cinema - 30){
		printf("A porta ainda nem abriu");
	}else{
		printf("O horario ta certo");
	}
	
	
	
	return 0;
}
