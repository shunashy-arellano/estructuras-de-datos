/* PILA 7: Arreglo de estructuras (cadena, entero, flotante, caracter)
		manejo de cima con apuntador simple. Apuntador simple al tipo de dato pila. */
		
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define TAM 5

struct persona{
	char nombre [30];
	int edad;
	float est;
	char sexo; 
};

struct Pila{
	struct persona person [TAM];
	struct persona *apper;
};

void meterPila(struct Pila *appii, struct persona *apdato){
	strcpy(appii->apper->nombre, apdato->nombre);
	appii->apper->edad = apdato->edad;
	appii->apper->est = apdato->est;
	appii->apper->sexo = apdato->sexo;
	appii->apper++;
} 

void sacarPila(struct Pila *appii, struct persona *apdato){
	appii->apper--;
	strcpy(apdato->nombre, appii->apper->nombre);
	apdato->edad = appii->apper->edad;
	apdato->est = appii->apper->est;
	apdato->sexo = appii->apper->sexo;
}

int pilaVacia(struct Pila *apva){
	if(apva->apper == apva->person){
		return 1;
	}
	else{
		return 0;
	}
}

int pilaLlena(struct Pila *apll){
	if(apll->apper == &apll->person[TAM]){
		return 1;
	}
	else{
		return 0;
	}
}

int menu(){
	int selec;
	fflush(stdin);
	printf("1: Meter pila\n");
	printf("2: Sacar pila\n");
	printf("3: Salir\n");
	scanf("%d", &selec);
	return (selec);
}

int main(){
	struct Pila pila, *appi;
	struct persona midato, *apmidato;
	appi = &pila;
	appi->apper = appi->person;
	apmidato = &midato; 
	
	
	for(;;){
	int selec = menu();
	switch(selec){
		case 1:
			if(pilaLlena(appi)==1){
				printf("La pila esta llena \n");
				getchar();
			}
			else{
				printf("Ingrese los datos\n");
				printf("Ingrese nombre\n");
				fflush(stdin);
				gets(apmidato->nombre);
				printf("Ingrese edad\n");
				scanf("%d", &apmidato->edad);
				printf("Ingrese estatura\n");
				scanf("%f", &apmidato->est);
				printf("Ingrese sexo\n");
				fflush(stdin);
				apmidato->sexo=getchar();
				meterPila(appi, apmidato);
			}
			break; 
		case 2:
			if(pilaVacia(appi)==1){
				printf("La pila esta vacia \n");
				getchar();
			}
			else{
				sacarPila(appi, apmidato);
				printf("\nRecuperado: %s, %d, %f, %c\n", apmidato->nombre, apmidato->edad, apmidato->est, apmidato->sexo);
				getchar();
			}
			break;
		case 3:
			exit(0);
		default:
			printf("Valor incorrecto. Vuelva a intertarlo\n");
			getchar();
	}
    }
	
	
	system("pause");
}
