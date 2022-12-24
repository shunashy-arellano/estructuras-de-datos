#include <stdio.h>

struct Persona{
	char nombre[30];
	int edad;
	float est;
	char sexo;
};

int main (){
	struct Persona per1, *ptrs;
	ptrs=&per1;
	
	printf ("Ingresa el nombre de per1: \n");
	gets(ptrs->nombre);
	fflush(stdin);
	printf ("Ingresa la edad de per1: \n");
	scanf("%d",&ptrs->edad);
	fflush(stdin);
	printf ("Ingresa la estatura de per1: \n");
	scanf ("%f",&ptrs->est);
	fflush(stdin);
	printf("Ingresa el sexo de per1: \n");
	ptrs->sexo=getchar();
	
	//Imprimir contenido y dirección de cada uno
	
	printf ("El nombre de per1 es %s y esta en la direccion %lu\n",ptrs->nombre,&ptrs->nombre);
	printf ("La edad de de per1 es %d y esta en la direccion %lu\n",ptrs->edad,&ptrs->edad);
	printf ("La estatura de per1 es %f y esta en la direccion %lu\n",ptrs->est,&ptrs->est);
	printf ("El sexo de per1 es %c y esta en la direccion %lu\n",ptrs->sexo,&ptrs->sexo);
}
