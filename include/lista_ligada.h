#ifndef __LISTA_LIGADA_H__
#define __LISTA_LIGADA_H__

#include "nodo.h"

typedef DLista{
    Nodo *head;
    Nodo *tail;
};

DLista* lista_crear();
bool lista_es_vacia(DLista *l);
int lista_num_nodos(DLlista* l);
bool lista_insertar_vacia(DLista *l, void *info, size_t size);
bool lista_insertar_inicio(DLista *l, void *info, size_t size);
bool lista_insertar_final(DLista *l, void *info, size_t size);
bool lista_insertar_x_posicion(DLista *l,int pos, void *info, size_t size);
#endif