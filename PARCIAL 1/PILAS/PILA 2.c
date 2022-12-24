/* PILA 2: Arreglo de enteros, manejo de cima con apuntador simple.
		Apuntador simple al tipo de dato pila. */
		
#include<stdio.h>
#include<stdlib.h>
struct pila{
	int arreglo[5];
	int *ptric;
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
	miptrp=&varp;
	miptrp->ptric=miptrp->arreglo;
	int midato;
	
	for(;;){
		switch (menu ()){
			case 1:
				if (estapilallena(miptrp)==1){
					printf ("La pila esta llena\n");
				} else {
					scanf ("%d",&midato);
					meterpila(miptrp,midato);
				}
				break;
				
			case 2:
				if (estapilavacia(miptrp)==1){
					printf ("La pila esta vacia\n");
				} else {
					printf ("El dato recuperado es %d\n",sacarpila(miptrp));
				}
				break;
				
			case 3:
				exit (0);
		}
	}

	return 0;
}

//Funciones

void meterpila (struct pila *ptrp, int dato){
	ptrp->arreglo[0]=dato;
	ptrp->ptric++;
}

int estapilallena (struct pila *ptrp){
	if (*ptrp->ptric==5){
		return (1);
	} else {
		return (0);
	}
}

int sacarpila (struct pila *ptrp){
	*ptrp->ptric--;
	return (ptrp->arreglo[0]);
}

int estapilavacia (struct pila *ptrp){
	if (ptrp->ptric==0){
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
