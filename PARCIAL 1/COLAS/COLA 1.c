#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int cola[TAM];
int ind = 0;

void meterCola(int n){
	cola[ind] = n;
	ind++;
}

int sacarCola(){
	int aux, i;
	aux = cola[0];
	for(i=0; i<ind-1; i++){
		cola[i]=cola[i+1];
	}
	ind--;
	return aux;
}

int colaLlena(){
	if(ind == TAM){
		return 1;
	}
	else{
		return 0;
	}
}

int colaVacia(){
	if(ind == 0){
		printf("La cola esta vacia");
		return 1;
	}
	else{
		return 0;
	}
}

int menu(){
	int selec;
	fflush(stdin);
	printf("1: Meter en Cola\n");
	printf("2: Sacar de Cola\n");
	printf("3: Salir\n");
	scanf("%d", &selec);
	return (selec);
}
int main(){
	int num;
	
	for(;;){
	int selec = menu();
	switch (selec){
		case 1:
			if(colaLlena() == 1){
				printf("La cola esta llena\n");
			}
			else{
			    printf("Ingrese un digito:\n");
			    scanf("%d", &num);
			    meterCola(num);
		    }
            break; 
		case 2:
		    if(colaVacia() == 1){
		    	printf("La cola esta vacia\n");
			} 
			else{
				printf("Recuperado: %d\n", sacarCola());
			}
            break; 
        case 3:
        	exit(0);
		default:
			printf("Valor incorrecto. Vuelva a intentarlo\n");
	}
	}
	
	
	system("pause");
}
