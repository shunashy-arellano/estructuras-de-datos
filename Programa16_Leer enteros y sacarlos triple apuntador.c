//Leer enteros y sacarlos con triple apuntador
#include <stdio.h>

int main(){
	int arreglo[5];
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	ptr1=arreglo;
	ptr2=&ptr1;
	
	for (ptr3=&ptr2;**ptr3<=&arreglo[4];(**ptr3)++){
		printf ("Ingresa el dato %d: \n",(int)(**ptr3-arreglo));
		scanf ("%d",**ptr3);
	}
	
	ptr1=arreglo;
	
	for (ptr3=&ptr2;**ptr3<=&arreglo[4];(**ptr3)++){
		printf ("En la celda %d esta el valor %d y se encuentra en la direccion %lu\n",(int)(**ptr3-arreglo),***ptr3,**ptr3);
	}
}
