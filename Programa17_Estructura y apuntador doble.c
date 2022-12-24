#include <stdio.h>

struct pers{
	char nombre[30];
	int edad;
};

int main(){
	struct pers arreglo[5];
	struct pers *ptr1;
	struct pers **ptr2;
	ptr1=arreglo;
	
	printf ("La direccion de inicio del arreglo es %lu\n\n",arreglo);
	
	for (ptr2=&ptr1;*ptr2<=&arreglo[4];(*ptr2)++){
		fflush(stdin);
		printf ("Ingrese el nombre de la posicion %d del arreglo: \n",(int)(*ptr2-arreglo));
		gets((*ptr2)->nombre);
		fflush(stdin);
		printf ("Ingrese la edad de la posicion %d del arreglo: \n",(int)(*ptr2-arreglo));
		scanf ("%d",&(*ptr2)->edad);
	}
	
	ptr1=arreglo;
	
	for (ptr2=&ptr1;*ptr2<=&arreglo[4];(*ptr2)++){
		printf ("El nombre %s de la posicion %d esta en la direccion %lu\n",(*ptr2)->nombre,(int)(*ptr2-arreglo),*ptr2);
		printf ("La edad %d de la posicion %d esta en la direccion %lu\n",(*ptr2)->edad,(int)(*ptr2-arreglo),*ptr2);
	}
return 0;	
}
