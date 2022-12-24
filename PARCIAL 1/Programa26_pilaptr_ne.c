//Modificar cómo pasar el dato compuesto...

#include <stdio.h>

struct persona{
	char nombre[30];
	int edad;
};

struct pila{
	struct persona arreglo[4];
	struct persona *ptr;
};

void meterpila (struct pila *ptrs, char nombre, int edad);
int estapilallena (struct pila *ptrs);
int sacarpila (struct pila *ptrs);
int estapilavacia (struct pila *ptrs);
int menu();


int main(){
	struct pila var;
	struct pila *miptrs;
	int minombre;
	int miedad;
	miptrs=&var;
	miptrs->ptr=miptrs->arreglo;
	
	//
	switch (menu ()){
			case 1:
				if (estapilallena(&var)==1){
					printf ("La pila esta llena\n");
				} else {
					scanf ("%s",&minombre);
					scanf ("%d",&miedad);
					meterpila(&var,minombre);
					meterpila(&var,miedad);
				}
				break;
				
			case 2:
				if (estapilavacia(&var)==1){
					printf ("La pila esta vacia\n");
				} else {
					printf ("El dato recuperado es %d",sacarpila(&varp));
				}
				break;
				
			case 3:
				exit (0);
	
	return 0;
}
//Decalar var tipo persona que se comporte como ptr
void meterpila (struct pila *ptrs, char nombre, int edad){
	ptrs->arreglo->nombre=nombre;
	ptrs->arreglo->edad=edad;
	ptrs->ptr++;
}

int estapilallena (struct pila *ptrs){
	if (ptrs->ptr==&ptrs->arreglo[4]){
		return (1);
	} else {
		return (0);
	}
}

int sacarpila (struct pila *ptrs){
	ptrs->ptr--;
	return (*ptrs->ptr);
}

int estapilavacia (struct pila *ptrs){
	if (ptrs->ptr==&ptr->arreglo){
		return (0);
	} else {
		return (1);
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
