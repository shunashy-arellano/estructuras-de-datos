#include<stdio.h>

struct persona{
	char nombre[30];
	int edad;
};

struct nodo{
	struct persona arreglo[5];
	struct persona *ptr1;
	struct persona **ptr2;	
};

int main(){
	struct nodo var;
	struct nodo *ptrs;
	ptrs=&var;
	ptrs->ptr1=ptrs->arreglo;
	
	for (ptrs->ptr2=&ptrs->ptr1;*ptrs->ptr2<=&ptrs->arreglo[4];(*ptrs->ptr2)++){
		fflush(stdin);
		printf ("Ingrese el nombre de la posicion %d: \n",*ptrs->ptr2-ptrs->arreglo);
		gets (ptrs->arreglo->nombre);
		fflush(stdin);
		printf ("Ingrese la edad de la posicion %d: \n",*ptrs->ptr2-ptrs->arreglo);
		scanf ("%d",ptrs->arreglo->nombre);
	}
	
	
	ptrs->ptr1=ptrs->arreglo;
	//Error de impresion del nombre
	for (ptrs->ptr2=&ptrs->ptr1;*ptrs->ptr2<=&ptrs->arreglo[4];(*ptrs->ptr2)++){
		printf ("En la celda %d esta el nombre %s en la direccion %lu\n",(*ptrs->ptr2-ptrs->arreglo),ptrs->arreglo->nombre,&ptrs->arreglo->nombre);
		printf ("En la celda %d esta la edad %d en la direccion %lu\n",(*ptrs->ptr2-ptrs->arreglo),ptrs->arreglo->edad,&ptrs->arreglo->edad);
	}
	
	return 0;
}
