#include <stdio.h>

int main(){
	int var=10;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	ptr1=&var;
	ptr2=ptr1;
	ptr3=ptr2;
	
	printf ("El valor de var es %d\n",var); //10
	printf ("La direccion de var es %lu\n",&var); 
	printf ("El valor de ptr1 es %lu\n",ptr1);
	printf ("El contenido de ptr1 es %d\n",*ptr1);
	printf ("El valor de ptr2 es %lu\n",ptr2);
	printf ("El contenido de ptr2 es %d\n",*ptr2);
	printf ("El valor de ptr3 es %lu\n",ptr3);
	printf ("El contenido de ptr3 es %d\n",*ptr3);
	/*printf ("El valor de lo que apunta en doble referencia es %d\n",*ptr2);
	printf ("El valor de lo que apunta en triple referencia es %d\n",**ptr3);*/
}
