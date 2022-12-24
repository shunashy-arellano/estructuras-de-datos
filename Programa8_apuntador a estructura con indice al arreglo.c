// CASO 3: APUNTADOR A ESTRUCTURA CON INDICE AL ARREGLO
#include <stdio.h>

struct Nodo{
	int arreglo[5];
	int i; //indice que maneja al arreglo	
};

int main(){
	struct Nodo var, *ptrs;
	ptrs=&var;
	
	for (ptrs->i=0;ptrs->i<=4;ptrs->i++){
		printf ("Ingresa el dato %d\n",ptrs->i+1);
		scanf ("%d",&ptrs->arreglo[ptrs->i]);
	}
	
	printf ("El tamaño del dato nodo es %d\n",sizeof(struct Nodo));
	printf ("La direccion de var es %lu\n",ptrs);
	
	for (ptrs->i=0;ptrs->i<=4;ptrs->i++){
		printf ("En la celda %d esta el valor %d y en la direccion %lu\n",ptrs->i,ptrs->arreglo[ptrs->i],&ptrs->arreglo[ptrs->i]);
	}
}
