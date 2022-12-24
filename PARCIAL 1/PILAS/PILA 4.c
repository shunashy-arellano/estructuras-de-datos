/* PILA 4: Arrelo de enteros, manejo de cima con apuntador simple.
		Apuntador doble al tipo de dato pila. */

#include <stdio.h>
#include <stdlib.h>
struct pila{
	int arreglo[5];
	int *ptrc;
};
//Prototipos
void meterpila (struct pila **ptrs2, int dato);
int estapilallena (struct pila **ptrs2);
int sacarpila (struct pila **ptrs2);
int estapilavacia (struct pila **ptrs2);
int menu();

int main(){
	struct pila var;
	struct pila *miptrp1;
	struct pila **miptrp2;
	int midato;
	miptrp1=&var;
	miptrp2=&miptrp1;
	(*miptrp2)->ptrc=(*miptrp2)->arreglo;
	
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
	*(*ptrp2)->ptrc=dato;
	(*ptrp2)->ptrc++;
}

int estapilallena (struct pila **ptrp2){
	if ((*ptrp2)->ptrc==&(*ptrp2)->arreglo[5]){
		return (1);
	} else {
		return (0);
	}
}

int sacarpila (struct pila **ptrp2){
	(*ptrp2)->ptrc--;
	return (*(*ptrp2)->ptrc);
}

int estapilavacia (struct pila **ptrp2){
	if ((*ptrp2)->ptrc==(*ptrp2)->arreglo){
		return (1);
	} else {
		return (0);
	}
}

int menu (){
	int opcion;
	printf ("¿Que desea hacer? (Ingrese el numero)\n");
	printf ("1. Ingresar dato en pila \n");
	printf ("2. Sacar dato de pila\n");
	printf ("3. Salir \n");
	scanf("%d",&opcion);
	return (opcion);
}
