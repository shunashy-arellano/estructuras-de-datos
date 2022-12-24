// CASO 4: APUNTADOR A ESTRUCTURA CON APUNTADOR AL ARREGLO
#include <stdio.h>

struct Nodo{
	int arreglo[5];
	int *ptr;
};

int main(){
	struct Nodo var, *ptrs;
	ptrs=&var;
	
	for (ptrs->ptr=ptrs->arreglo;ptrs->ptr<=&ptrs->arreglo[4];ptrs->ptr++){
		printf ("Ingresa el dato %d\n",(int)(ptrs->ptr-ptrs->arreglo+1));
		scanf ("%d",ptrs->ptr);
	}
	
	printf ("El tamaño del dato nodo es %d\n",sizeof(struct Nodo));
	printf ("La direccion de var es %lu\n",ptrs);
	
	for (ptrs->ptr=ptrs->arreglo;ptrs->ptr<=&ptrs->arreglo[4];ptrs->ptr++){
		printf ("En la celda %d esta el valor %d y en la direccion %lu\n",(int)(ptrs->ptr-ptrs->arreglo),*(ptrs->ptr),ptrs->ptr);
	}
}
