#include <stdio.h>

struct Persona{
	int edad;
	float est;
	char sexo;
	char nombre [30];
};

int main (){
	struct Persona Per1,Per2;
	
	printf ("Ingresa la edad de Per1: \n");
	scanf ("%d",&Per1.edad);
	fflush(stdin);
	printf ("Ingresa la estatura de Per1: \n");
	scanf ("%f",&Per1.est);
	fflush(stdin);
	printf ("Ingresa el sexo de Per1: \n");
	Per1.sexo=getchar();
	fflush(stdin);
	printf ("Ingresa el nombre de Per1: \n");
	gets(Per1.nombre);
	
	//Imprimir datos, donde están ubicados y cuanto miden
	
	printf ("El tamaño del dato persona es %d\n",sizeof(struct Persona));
	printf ("La variable Per1 está en la direccion %lu\n",&Per1);
	printf ("La edad de Per1 es %d y esta en la direccion %lu\n",Per1.edad,&Per1.edad);
	printf ("La estatura de Per1 es %f y esta en la direccion %lu\n",Per1.est,&Per1.est);
	printf ("El sexo de Per1 es %c y esta en la direccion %lu\n",Per1.sexo,&Per1.sexo);
	printf ("El nombre de Per1 es %s y esta en la direccion %lu\n",Per1.nombre,&Per1.nombre);
	
}
