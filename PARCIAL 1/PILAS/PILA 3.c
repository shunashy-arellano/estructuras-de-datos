/* PILA 3: Arreglo de enteros , manejor de la cima con indice.
		Apuntador doble al tipo de dato pila. */

#include<stdio.h>
#include<stdlib.h>
struct pila{
	int arreglo[5];
	int ic;
};

//Prototipos
void meterpila (struct pila **ptrp2, int dato);
int estapilallena (struct pila **ptrp2);
int sacarpila (struct pila **ptrp2);
int estapilavacia (struct pila **ptrp2);
int menu();

int main(){
	struct pila varp;
	struct pila *miptrp1;
	struct pila **miptrp2;
	miptrp1=&varp;
	miptrp2=&miptrp1;
	(*miptrp2)->ic=0;
	int midato;
	
	for(;;){
		switch (menu ()){
			case 1:
				if (estapilallena(miptrp2)==1){
					printf ("La pila esta llena\n");
				} else {
					printf("Dato: \n");
					scanf ("%d",&midato);
					meterpila(miptrp2,midato);
				}
				break;
				
			case 2:
				if (estapilavacia(miptrp2)==1){
					printf ("La pila esta vacia\n");
				} else {
					printf ("El dato recuperado es %d\n",sacarpila(miptrp2));
				}
				break;
				
			case 3:
				exit (0);
		}
	}

	return 0;
}

//Funciones

void meterpila (struct pila **ptrp2, int dato){
	(*ptrp2)->arreglo[(*ptrp2)->ic]=dato;
	(*ptrp2)->ic++;
}

int estapilallena (struct pila **ptrp2){
	if ((*ptrp2)->ic==5){
		return (1);
	} else {
		return (0);
	}
}

int sacarpila (struct pila **ptrp2){
	(*ptrp2)->ic--;
	return ((*ptrp2)->arreglo[(*ptrp2)->ic]);
}

int estapilavacia (struct pila **ptrp2){
	if ((*ptrp2)->ic==0){
		return (1);
	} else {
		return (0);
	}
}

int menu (){
	int opcion;
	printf ("1. Ingresar dato en pila \n");
	printf ("2. Sacar dato de pila\n");
	printf ("3. Salir \n");
	scanf("%d",&opcion);
	return (opcion);
}
/*
#include<stdio.h>
#include<stdlib.h>
struct pila{
	int arreglo[5];
	int ic;
};

//Prototipos
void meterpila (struct pila **ptrp2, int dato);
int estapilallena (struct pila **ptrp2);
int sacarpila (struct pila **ptrp2);
int estapilavacia (struct pila **ptrp2);
int menu();

int main(){
	struct pila varp;
	struct pila *miptrp;
	struct pila **miptrp2;
	miptrp=&varp;
	miptrp->ic=0;
	int midato;

	for(;;){
		switch (menu ()){
			case 1:
				if (estapilallena(miptrp2)==1){
					printf ("La pila esta llena\n");
				} else {
					scanf ("%d",&midato);
					meterpila(miptrp2,midato);
				}
				break;

			case 2:
				if (estapilavacia(miptrp2)==1){
					printf ("La pila esta vacia\n");
				} else {
					printf ("El dato recuperado es %d\n",sacarpila(miptrp2));
				}
				break;

			case 3:
				exit (0);
		}
	}

	return 0;
}

//Funciones

void meterpila (struct pila **ptrp2, int dato){
	(*ptrp2)->arreglo[0]=dato;
	(*ptrp2)->ic++;

}

int estapilallena (struct pila **ptrp2){
	if ((*ptrp2)->ic==5){
		return (1);
	}else {
		return (0);
	}
}

int sacarpila (struct pila **ptrp2){
	(*ptrp2)->ic--;
	return ((*ptrp2)->arreglo[(*ptrp2)->ic]);
}

int estapilavacia (struct pila **ptrp2){
	if ((*ptrp2)->ic==0){
		return (1);
	} else {
		return (0);
	}
}

int menu (){
	int opcion;
	printf ("1. Ingresar dato en pila \n");
	printf ("2. Sacar dato de pila\n");
	printf ("3. Salir \n");
	scanf("%d",&opcion);
	return (opcion);
}
*/
