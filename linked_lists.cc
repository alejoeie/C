#include<iostream>

using namespace std;

struct Nodo{
  int dato;
  Nodo *next;
};

void insert(Nodo *&, int);
void show(Nodo *&);

int main(){
  Nodo *testList = NULL;
  int a = 5;
  int b = 16;

  insert(testList, a);
  insert(testList, b);
  show(testList);
  return 0;
}

void insert(Nodo *&lista, int n){
  Nodo *new_list = new Nodo();

  new_list->dato = n;
  /*
   * --------------------
   * |		|	|
   * |	newlist	| next	|
   * |		|	|
   * --------------------
   * */
  Nodo *current_list = lista; // Inicio de la lista
  Nodo *previous; // Lista previa

  while((current_list!=NULL) && (current_list->dato < n)){
    // In this list we are going to have the iteration for 
    // each list element.
    previous = current_list;
    current_list = current_list->next;
  }

  if(lista == current_list){
    lista = new_list;
  }else{
    previous->next=new_list;
  }

  new_list->next = current_list;
}

void show(Nodo *&lista){
  Nodo*current = lista;
  Nodo*siguiente;

  while(current != NULL){
    cout << current->dato << " -> ";
    current = current->next;
  }
}
