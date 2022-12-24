#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nodo{
int dato;
char nombre[30];
struct nodo *ptrsig;
};

struct datos{
int edad;
char nombre[30];
};


struct nodo * cn(struct datos*);
void mp(struct nodo *, struct datos*);
void sacarpila(struct nodo *);
void mostrar(struct nodo*);
struct nodo *ingresa(struct nodo *, struct datos *);
int menu(int);
int lee();
void ciclo(struct nodo*, struct datos*, int);

int main()
{

struct nodo*ptrref, **ptrref2;
struct datos dd, *ptrdd;

ptrdd=&dd;
strcpy(ptrdd->nombre,"aaa");
ptrdd->edad=-1;

ptrref=cn(ptrdd); //ptrref2=&ptrref;
ciclo(ptrref, ptrdd, 1);
}



struct nodo * cn(struct datos *ptrdd)
{
struct nodo *ptrn;
ptrn=(struct nodo *)malloc(sizeof (struct nodo));

ptrn->dato=ptrdd->edad;
strcpy(ptrn->nombre,ptrdd->nombre);
ptrn->ptrsig=NULL;

return ptrn;
}

void mp(struct nodo *ptrref, struct datos *ptrdd)
{
struct nodo *ptrn;
ptrn=cn(ptrdd);
if(ptrref->ptrsig==NULL)
ptrref->ptrsig=ptrn;
else
{
ptrn->ptrsig=ptrref->ptrsig;
ptrref->ptrsig=ptrn;
}
}


void sacarpila(struct nodo*ptrref)
{
struct nodo *ptraux;
if(ptrref->ptrsig==NULL) //if(*ptrref2==NULL)
printf("PILA VACIA\n");
else
{
ptraux=ptrref->ptrsig; //ptraux=*ptrref2
printf("\nAlumno rescatado... \n Nombre: %s  \n Edad: %d\n",ptraux->nombre, ptraux->dato);
ptrref->ptrsig=ptraux->ptrsig;
free(ptraux);
}
}

void mostrar(struct nodo *ptrref)
{
struct nodo *ptrrec;
ptrrec=ptrref->ptrsig;
while(ptrrec!=NULL)
{
printf("\n El Nombre del alumno es: \n %s \nY su edad es:\n %d\n",ptrrec->nombre, ptrrec->dato);
ptrrec=ptrrec->ptrsig;
}
}

struct nodo *ingresa(struct nodo *ptrref, struct datos *ptrdd)
{
setbuf(stdin,NULL);
puts("\nIngresa el nombre del alumno:\n");
gets(ptrdd->nombre);
puts("\nIngresa la edad del alumno: \n");
scanf("%d", &ptrdd->edad);
mp(ptrref, ptrdd);
}

int menu(int a)
{
puts("\nBienvenido\n Escoge una opcion....\n1- Guardar alumno en agenda.\n2.-Sacar Alumno de la agenda.\n3.-Mostrar alumnos en agenda.\n");
scanf("%d", &a);
return a;
}

int lee()
{
int b;
puts("Si desea realizar otro proceso ingrese uno, de lo contrario ingrese cualquier numero");
scanf("%d",&b);
return b;
}
void ciclo(struct nodo *ptrref, struct datos*ptrdd, int b)
{

int a;
if (b==1)
{
system("clear");
switch (menu(a))
	{
	case 1:
	ingresa(ptrref, ptrdd);
	break;
	case 2:
	sacarpila(ptrref);
	break;
	case 3:
	mostrar(ptrref);
	break;
	case 4:
	break;
	}

	b=lee();
	ciclo(ptrref, ptrdd, b);
}

}


