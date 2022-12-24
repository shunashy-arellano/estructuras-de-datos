#include<bits/stdc++.h>

//ESTRUCTURA DEL NODO//
struct nodo{
	int dato;
	struct nodo *ptrsig;
};
struct nodo *ptrini;	//APUNTADORES AL INICIO Y AL FINAL//
struct nodo *ptrfinal;

void meterinicial(void);
void meterfinal(void);
void sacarinicio(void);
void sacarfinal(void);
void mostrar(void);
bool Empty(void);

int main(){
    int dato;
    int option;
  	ptrini=NULL;	
    
    while(1){
        do
	{
	    printf("\n\n\n\n\n\n\n\n\n\n\n");
        printf("********************\n");
		printf("1.APILAR ADELANTE	         \n");
		printf("2.APILAR ATRAS			\n");
		printf("3.DESAPILAR	 ADELANTE    \n");
		printf("4.DESAPILAR POR ATRAS		\n");
		printf("5.VISUALIZAR	     \n");
		printf("6.SALIR		     \n");
	    printf("********************\n");
        printf("\nElija opcion    ");
		scanf("%d", &option);
		switch(option)
		{
			case 1:{
			meterinicial();
			break;
			} 
			case 2:
			{
                
		     meterfinal();			
	
				break;
			}
			case 3:	{
			sacarinicio();	
			break;
			}
			case 4:{
				sacarfinal();
				break;
			}
			case 5:{
				mostrar();
				break;
			}
			case 6:exit(0);
			
		}
        
        
    } while(option!=6);
}


return 0;
}

void meterinicial(){
	system("cls");//lIMPIA LA PANTALLA//
	//GENERA UN NUEVO NODO//
	struct nodo *ptrNuevo;		
	ptrNuevo=(struct nodo *)malloc(sizeof(struct nodo));
	
	printf("\nMete al inicio:\n");
	printf("\nIngrese un dato entero:");
	scanf("%d",&ptrNuevo->dato);
	ptrNuevo->ptrsig=NULL;
	
	//PREGUNTA SI ES EL PRIMER NODO, SI ES ASI ENTRA A ESTE IF//
	if(ptrini==NULL)
	{
		printf("\nPrimer Nodo!!!");
		ptrini=ptrNuevo; //A ptrini LE ASIGNA LA DIRECCION DEL NUEVO NODO//
		ptrini->ptrsig=ptrini;//apunta al mismo nodo
		ptrfinal=ptrNuevo;
	}
	else{//SI YA EXISTIAN MAS NODOS ENTONCES ESTO//
		ptrNuevo->ptrsig=ptrini;
		ptrini=ptrNuevo;
		ptrfinal->ptrsig=ptrini;
	}
	
}

void meterfinal(void){
	system("cls");
	struct nodo *ptrNuevo;
	ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));//CREA UN NUEVO NODO//
	printf("\nMeter al final\n");
	printf("\nIngrese un dato:");
	scanf("%d",&ptrNuevo->dato);
	ptrNuevo->ptrsig=NULL;
	
	if(ptrini==NULL){
		printf("\nPrimer nodo!!\n");
		ptrini=ptrNuevo;
		ptrini->ptrsig=ptrini;
		ptrfinal=ptrNuevo;
	}
	else{
		ptrfinal->ptrsig=ptrNuevo;
		ptrNuevo->ptrsig=ptrini;
		ptrfinal=ptrNuevo;
	}
	
}
void mostrar(void){
	system("cls");
	struct nodo *ptrRecini;
	
	if(Empty()==1){
		printf("\nPILA VACIA\n");
	return;
	}
	
	else{
		for(ptrRecini=ptrini;ptrRecini!=ptrfinal;ptrRecini=ptrRecini->ptrsig){
		printf("%d\n",ptrRecini->dato);
		
	}
	printf("%d\n",ptrfinal->dato);
	}

}
void sacarinicio(void){

	struct nodo *ptrAux;//APUNTADOR QUE NOS AYUDARA EN ESTE MOMENTO
	system("cls");
	printf("\nEliminar dato al inicio\n");
	if(ptrini==NULL)
	printf("\nLa lista esta vacia\n");
	else if(ptrini==ptrfinal){//ESTO OCURRE SOLO CUANDO ES EL PRIMER DATO NADA MAS//
		printf("\nSe elimino el ultimo nodo:%d\n",ptrini->dato);
		free(ptrini);
		ptrini=NULL;
		ptrfinal=NULL;
	}
	else{//SI NO PUES BUENO//
		ptrAux=ptrini;
		ptrini=ptrini->ptrsig;
		ptrfinal->ptrsig=ptrini;
		
		printf("\nSe elimino el dato inicial:%d\n",ptrAux->dato);
		free(ptrAux);
	}
	system("pause");
}

void sacarfinal(void){	
	system("cls");
	struct nodo *ptrAnt,*ptrRec;
	printf("\nEliminar ultimo elemento\n");
	
	if(ptrini==NULL)
	printf("\nLista vacia\n");
	else if(ptrini==ptrfinal){
		printf("\nSe elimino el ultimo nodo:%d\n",ptrini->dato);
		free(ptrini);
		ptrini=NULL;
		ptrfinal=NULL;
	}
	else{
		ptrAnt=ptrini;
		ptrRec=ptrini->ptrsig;
		while(ptrRec->ptrsig==ptrfinal){
			ptrAnt=ptrRec;
			ptrRec=ptrRec->ptrsig;
			
		}
		ptrAnt->ptrsig=ptrini;
		ptrfinal=ptrAnt;
		printf("\nSe elimino nodo:%d\n",ptrRec->dato);
		free(ptrRec);
	}
	system("pause");
}

bool Empty(void){
	
	return ptrini==NULL;
}

