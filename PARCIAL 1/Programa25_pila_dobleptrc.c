//Version doble apuntador a cima **ptrc
#include<stdio.h>

struct pila{
	int arreglo[5];
	int *ptrc;
	int **ptrc2;
};

void meterpila (struct pila **ptrs2, int dato);
int estapilallena (struct pila **ptrs2);
int sacarpila (struct pila **ptrs2);
int estapilavacia (struct pila **ptrs2);
int menu();

int main(){
	struct pila var, *miptrs1, **miptrs2;
	int midato;
	miptrs1=&var;
	miptrs2=&miptrs1;
	(*(*miptrs2)->ptrc2)=(*(*miptrs2)->arreglo);
	
		for(;;){
		switch (menu ()){
			case 1:
				if (estapilallena(miptrs2)==1){
					printf ("La pila esta llena\n");
				} else {
					scanf ("%d",&midato);
					meterpila(miptrs2,midato);
				}
				break;
				
			case 2:
				if (estapilavacia(miptrs2)==1){
					printf ("La pila esta vacia\n");
				} else {
					printf ("El dato recuperado es %d",sacarpila(miptrs2));
				}
				break;
				
			case 3:
				exit (0);
		}
	}
	
	return 0;	
}

void meterpila (struct pila **ptrs2, int dato){
	**(*ptrs2)->ptrc2=dato;
	*(*ptrs2)->ptrc2++;
}

int estapilallena (struct pila **ptrs2){
	if (*(*ptrs2)->ptrc2==&(*ptrs2)->arreglo[5]){
		return (1);
	} else {
		return (0);
	}
}

int sacarpila (struct pila **ptrs2){
	*(*ptrs2)->ptrc2--;
	return (**(*ptrs2)->ptrc2);
}

int estapilavacia (struct pila **ptrs2){
	if (*(*ptrs2)->ptrc2==(*ptrs2)->arreglo){
		return (0);
	} else {
		return (1);
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
