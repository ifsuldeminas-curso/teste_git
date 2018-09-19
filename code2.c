#include <stdio.h>

int main(){
	
	int x = 15; //testes sf
	int y = 5;
	
	int i = 0;
	
	for(i = 0; i<10;i++)
		printf("Teste de controle de verção git = %d\n",(div(x,y))*i)
		//comentario aleatorio 
	return 0;
}

int soma(int x,int y){
	return x+y; //code teste
}
int subtracao(int x,int y){
	return x-y;
}	
int mult(int x,int y){
	return x*y;
}	
int div(int x,int y){
	return x/y;
}	

