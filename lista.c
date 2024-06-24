#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

Lista *ListNew(int size)
{
    Lista *lista = NULL;

    lista = (Lista *)calloc(1, sizeof(Lista));
    lista->data = (int *)calloc(size, sizeof(int));
    lista->size = size;
    lista->n = 0;

    return lista;
}

void ListInfo(Lista *lista)
{
    int i;

    printf("Tamanho maximo: %d\n", lista->size);
    printf("Quantidade de elementos: %d\n", lista->n);
    printf("Ponteiro do vetor: %p\n", lista->data);
    ListPrint(lista);
    printf("\n");
}

void ListPrint(Lista *lista)
{
    int i;

    printf("[");

    for (i = 0; i < lista->n; i++)
    {
        printf("%d", lista->data[i]);
        if (i < lista->n - 1)
            printf(", ");
    }

    printf("]\n");
}

void ListInsert(Lista *lista, int data)
{

    if (lista->n == lista->size)
        ListExpand(lista, lista->size + 4);

    lista->data[lista->n] = data;
    (lista->n)++;
}

void ListRemove(Lista *lista, int pos)
{
    int i;

    if (lista->n == 0)
    {
        printf("Erro! A lista esta vazia.\n");
        return;
    }

    for (i = pos - 1; i < lista->n - 1; i++)
        lista->data[i] = lista->data[i + 1];

    (lista->n)--;

    ListReduce(lista);
}

void ListExpand(Lista *lista, int newSize)
{
    lista->data = (int *)realloc(lista->data, newSize * sizeof(int));
    lista->size = newSize;
}

void ListReduce(Lista *lista)
{
    lista->data = (int *)realloc(lista->data, lista->n * sizeof(int));
    lista->size = lista->n;
}

void ListFree(Lista *lista)
{
    free(lista->data);
    free(lista);
}