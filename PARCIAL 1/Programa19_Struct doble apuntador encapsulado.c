#include<stdio.h>
#include<stdlib.h>

struct nodo{
	int arreglo [5];
	int *ptr1;
	int **ptr2;
};

int main(){
	struct nodo var;
	struct nodo *ptrs;
	ptrs=&var;
	
	ptrs->ptr1=ptrs->arreglo;
	
	printf ("La direccion de inicio del arreglo es %lu\n",ptrs->arreglo);
	
	for (ptrs->ptr2=&ptrs->ptr1;*ptrs->ptr2<=&ptrs->arreglo[4];(*ptrs->ptr2)++){
		printf ("Ingrese el dato numero %d: \n",*ptrs->ptr2-ptrs->arreglo);
		scanf ("%d",*ptrs->ptr2);
	}
	
	ptrs->ptr1=ptrs->arreglo;
	
	for (ptrs->ptr2=&ptrs->ptr1;*ptrs->ptr2<=&ptrs->arreglo[4];(*ptrs->ptr2)++){
		printf ("En la celda %d esta el dato %d en la direccion %lu\n",*ptrs->ptr2-ptrs->arreglo,**ptrs->ptr2,*ptrs->ptr2);
	}
	
	return 0;
}
