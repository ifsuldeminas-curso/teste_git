#include <stdio.h>

int main(){
	
	int x = 3;
	int y = 5;
	
	int i = 0;
	
	for(i = 0; i<10;i++)
		printf("Teste de controle de verção git = %d\n",(subtracao(x,y))*i);
	
	return 0;
}

int soma(int x,int y){
	return x+y;
}
int subtracao(int x,int y){
	return x-y;
}		
