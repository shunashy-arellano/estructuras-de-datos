#include <stdio.h>

int main(){
	int a,b;
	int * ptr;
	a=10;
	ptr=&a;
	b=*ptr;
	
	printf ("%d\n",a);
	printf ("%d\n",ptr);
	printf ("%d\n",b);
	/*Meter desde el teclado 5 enteros y luego imprimirlos en pantalla
	usando un arreglo*/
	
	//Usando los indices
	
	int arreglo [5],i;
	
	for (i=0;i<=4;i++){
		printf ("Ingrese el dato %d: \n", i);
		scanf ("%d",&arreglo[i]);
	}
	
	for (i=0;i<=4;i++){
		printf ("En la celda %d contiene el dato %d y esta en la direccion %lu\n",i,arreglo[i],&arreglo[i]);
	}
	
	//Usando apuntadores
	
	int arreglo2[5],*ptr2;
	
	for (ptr2=arreglo2;ptr2<= &arreglo2[4];ptr2++){
		printf ("Ingresa el dato %d : \n", (int)(ptr2-arreglo2));
		scanf ("%d",ptr2);
	}
	
	for (ptr2=arreglo2;ptr2<=&arreglo2[4];ptr2++){
		printf ("En la celda %d contiene el dato %d y esta en la direccion %lu\n",(int)(ptr2-arreglo2),*ptr2,ptr2);
	}
	
	return 0;
}
