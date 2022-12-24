#include<stdio.h>
#include<stdlib.h>


typedef  int elem;

void imp_elem(elem e){
	printf("%d\n",e);
}

typedef struct nodo{
	elem dato;		
	struct nodo*sig;
}*Circular;

Circular nueva(void){
	return NULL;
}

int es_nueva(Circular q){
	return q == NULL;
}

Circular formar(Circular q ,elem e){
	Circular t = (Circular)malloc(sizeof(struct nodo));
	t -> dato = e;
	if(es_nueva(q)){
		q = t;
    	q -> sig = q;  
} else{
	t -> sig = q -> sig;
    q->sig =  t; 
}
  return t;
}

elem primero(Circular q){
  return q -> sig -> dato;
}


Circular desformar(Circular q){
	Circular t;
    t = (Circular)malloc(sizeof(struct nodo));
	if(q == q->sig){
		return nueva();	   
	} else{     
	t = q->sig;         
	q -> sig = q->sig->sig;         
	free(t);      
	return q;     
	}
}

Circular rotar(Circular q){
return q->sig;
}

int main(void){

  int i = 0;

  Circular q;

  q = nueva();


  for(i=1;i<10;i++){
    q = formar(q,i);
  }


  while(1){
    imp_elem(primero(q));
    q = rotar(q);
    getchar();
  }

return 0;

}
