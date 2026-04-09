#include "lista_ligada.h"

bool lista_insertar_vacia(DLista *l, void *info, size_t size){

    if(l = NULL) return false;
    Nodo *n = nodo_crear(info, size);
    l -> head = l -> tail;
    return true;
}

bool lista_insertar_inicio(DLista *l, void *info, size_t size){

    if(l ==NULL)return false;
    Nodo *new = nodo_crear(info, size);
    new -> sig = l -> head;
    l -> head -> ant = new;
    l -> head = new;
    return true;
}

bool lista_insertar_final(DLista *l, void *info, size_t size){

    if(l = NULL) return false;
    Nodo *new = nodo_crear(info, size);
    new -> ant = l-> tail;
    l -> tail -> sig = new;
    l -> tail = new;
    return true;
}
int lista_num_nodos(DLlista* l){

    int i = 0;
    for(Ndo *tmp = l -> head; tmp != NULL; tmp = tmp -> sig, i++);
    return;
}

bool lista_insertar_x_posicion(DLista *l,int pos, void *info, size_t size){

    if(l == NULL) return false;
    if(lista_es_vacia(l))return lista_insertar_vacia(l, info, size);
    if(pos == 0) return lista_insertar_inicio(l, info, size);
    if(pos == lista_num_nodos(l)) return lista_insertar_final(l, info, size);
    if(pos >= 1 && pos <= lista_num_nodos(l)-1){
        Nodo* new = nodo_crear(info, size);
        Nodo* tmp = l -> head;
        for(int pos_act = 0; pos_act < pos; pos_act++)tmp = tmp -> sig
    }
}