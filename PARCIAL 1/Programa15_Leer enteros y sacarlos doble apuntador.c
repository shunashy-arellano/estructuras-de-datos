//Leer enteros y sacarlos usando apuntador doble
#include <stdio.h>

int main(){
	int arreglo[5];
	int *ptr1; //apuntador a entero
	int **ptr2; //apuntador a un apuntador a entero
	ptr1=arreglo; //ptr1 apunta al arreglo
	
	for (ptr2=&ptr1;*ptr2<=&arreglo[4];(*ptr2)++){
		printf ("Ingresa el dato %d: \n",(int)(*ptr2-arreglo));
		scanf ("%d",*ptr2);
	}
	
	ptr1=arreglo;
	
	for (ptr2=&ptr1;*ptr2<=&arreglo[4];(*ptr2)++){
		printf ("En la celda %d esta el valor %d y se encuentra en la direccion %lu\n",(int)(*ptr2-arreglo),**ptr2,*ptr2);
	}
	
return 0;
}
