#include <stdio.h>

struct nodo{
	int arreglo[5];
	int *ptr1;
	int **ptr2;
	int ***ptr3;
};

int main(){
	
	struct nodo var;
	struct nodo *ptrs;
	ptrs=&var;
	
	ptrs->ptr1=ptrs->arreglo;
	ptrs->ptr2=&ptrs->ptr1;
	
	printf("La direccion de inicio del arreglo es %lu\n", ptrs->arreglo);
	
	for (ptrs->ptr3=&ptrs->ptr2;**ptrs->ptr3<=&ptrs->arreglo[4];(**ptrs->ptr3)++){
		printf("Ingrese el dato numero %d: \n",**ptrs->ptr3-ptrs->arreglo);
		scanf("%d",**ptrs->ptr3);
	}
	
	ptrs->ptr1=ptrs->arreglo;
	ptrs->ptr2=&ptrs->ptr1;
	
	for (ptrs->ptr3=&ptrs->ptr2;**ptrs->ptr3<=&ptrs->arreglo[4];(**ptrs->ptr3)++){
		printf("En la celda %d esta el dato %d en la direccion %lu\n",**ptrs->ptr3-ptrs->arreglo,***ptrs->ptr3,**ptrs->ptr3);
	}
	
	return 0;
}
