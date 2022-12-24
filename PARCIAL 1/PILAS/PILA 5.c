/* PILA 5: Arreglo de enteros, manejo de cima con apuntador doble.
		Apuntador doble al tipo de dato pila. */
#include<stdio.h>
#include<stdlib.h>

struct pila{
    int arr[5];
    int *ptrCima;
    int **ptrCabeza;
};

void meterdato(struct pila **, int);
int estallena(struct pila **);
int sacardato(struct pila **);
int esvacia(struct pila **);
int menu();

//-----------------------------------------------------------------------------------------------
int main(){
    struct pila var;
    struct pila *ptrPila1;
    struct pila **ptrPila2;
    int superdato;
    
    ptrPila1 = &var;
    ptrPila2 = &ptrPila1;
    (*ptrPila2)->ptrCima = (*ptrPila2)->arr;
    *(*ptrPila2)->ptrCabeza = (*ptrPila2)->ptrCima;
    
    for(;;){
        switch(menu()){
            case 1:
                if(estallena(ptrPila2)==1)
                    printf("\nPila llena :c\n");
                else{
                    printf("\nIngrese dato: ");
                    scanf("%d", &superdato);
                    meterdato(ptrPila2, superdato);
                    break;
                }
            case 2:
                if(esvacia(ptrPila2)==1)
                    printf("\nPila vacia :c\n");
                else{
                    printf("\nEl dato capturado es: %d", sacardato(ptrPila2));
                    break;
                }
            case 3:
                exit(0);
            default:
                printf("\nOPCION INVALIDA >:v\n");
                menu();
        }
    }
    
return 0;
}
//-----------------------------------------------------------------------------------------------

void meterdato(struct pila **ptr, int dato){
    **(*ptr)->ptrCabeza = dato;
    *(*ptr)->ptrCabeza++;
}
int estallena(struct pila **ptr){
    if(*(*ptr)->ptrCabeza == &(*ptr)->arr[5])
        return 1;
    else
        return 0;
}
int sacardato(struct pila **ptr){
    *(*ptr)->ptrCabeza--;
    return (**(*ptr)->ptrCabeza);
}
int esvacia(struct pila **ptr){
    if(*(*ptr)->ptrCabeza == &(*ptr)->arr[5])
        return 1;
    else
        return 0;
}
int menu(){
    int opcion;
    
    printf("\n1.- Ingresar dato a la pila");
    printf("\n2.- Sacar ultimo dato de la pila");
    printf("\n3.- Salir");
    printf("\nTu opcion: ");
    scanf("%d", &opcion);
    
    return (opcion);
}
