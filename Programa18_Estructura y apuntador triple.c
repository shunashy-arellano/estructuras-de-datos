#include <stdio.h>

struct pers{
	char nombre[30];
	int edad;
};

int main(){
	struct pers arreglo[5];
	struct pers *ptr1;
	struct pers **ptr2;
	struct pers ***ptr3;
	ptr1=arreglo;
	ptr2=&ptr1;
	
	for (ptr3=&ptr2;**ptr3<=&arreglo[4];(**ptr3)++){
		fflush(stdin);
		printf ("Ingrese el nombre de la posicion %d del arreglo: \n",(int)(**ptr3-arreglo));
		gets((**ptr3)->nombre);
		fflush(stdin);
		printf ("Ingrese la edad de la posicion %d del arreglo: \n",(int)(**ptr3-arreglo));
		scanf("%d",&(**ptr3)->edad);
	}
	
	ptr1=arreglo;
	ptr2=&ptr1;
	
	for (ptr3=&ptr2;**ptr3<=&arreglo[4];(**ptr3)++){
		printf ("En la celda %d esta el nombre %s en la direccion %lu\n",**ptr3-arreglo,(**ptr3)->nombre,**ptr3);
		printf ("En la celda %d esta la edad %d en la direccion %lu\n",**ptr3-arreglo,(**ptr3)->edad,**ptr3);
	}
	return 0;
}
