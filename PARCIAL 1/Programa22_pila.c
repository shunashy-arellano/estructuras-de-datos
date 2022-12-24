#include<stdio.h>
#include<stdlib.h>
struct pila{
	int arreglo[5];
	int ic;
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
	miptrp->ic=0;
	int midato;
	
	do{
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
	} while (miptrp->ic<=miptrp->arreglo[5]);

	return 0;
}

//Funciones

void meterpila (struct pila *ptrp, int dato){
	ptrp->arreglo[ptrp->ic]=dato;
	ptrp->ic++;
}

int estapilallena (struct pila *ptrp){
	if (ptrp->ic==5){
		return (1);
	} else {
		return (0);
	}
}

int sacarpila (struct pila *ptrp){
	ptrp->ic--;
	return (ptrp->arreglo[ptrp->ic]);
}

int estapilavacia (struct pila *ptrp){
	if (ptrp->ic==0){
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
