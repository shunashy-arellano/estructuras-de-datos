#include<stdio.h>

struct pila{
	int arreglo[5];
	int *ptrc;
};

//Prototipos
void meterpila (struct pila *ptrp, int dato);
int estapilallena (struct pila *ptrp);
int sacarpila (struct pila *ptrp);
int estapilavacia (struct pila *ptrp);
int menu();

int main(){
	struct pila varp;
	struct pila *miptrp;
	int midato;
	miptrp=&varp;
	miptrp->ptrc=miptrp->arreglo;
	
	do{
		switch (menu ()){
			case 1:
				if (estapilallena(&varp)==1){
					printf ("La pila esta llena\n");
				} else {
					scanf ("%d",&midato);
					meterpila(&varp,midato);
				}
				break;
				
			case 2:
				if (estapilavacia(&varp)==1){
					printf ("La pila esta vacia\n");
				} else {
					printf ("El dato recuperado es %d\n",sacarpila(&varp));
				}
				break;
				
			case 3:
				exit (0);
		}
	} while (miptrp->ptrc<=&miptrp->arreglo[5]);

	return 0;
}

//Funciones

void meterpila (struct pila *ptrp, int dato){
	*ptrp->ptrc=dato;
	ptrp->ptrc++;
}

int estapilallena (struct pila *ptrp){
	if (ptrp->ptrc==&ptrp->arreglo[5]){
		return (1);
	} else {
		return (0);
	}
}

int sacarpila (struct pila *ptrp){
	ptrp->ptrc--;
	return (*ptrp->ptrc);
}

int estapilavacia (struct pila *ptrp){
	if (ptrp->ptrc==&ptrp->arreglo[0]){
		return (1);
	} else {
		return (0);
	}
}

int menu (){
	int opcion;
	printf ("¿Que desea hacer? (Ingrese el numero)\n\n");
	printf ("1. Ingresar dato en pila \n");
	printf ("2. Sacar dato de pila\n");
	printf ("3. Salir \n");
	scanf("%d",&opcion);
	return (opcion);
}
