#ifndef __LISTA_H__
#define __LISTA_H__

/**
 * @brief Estrutura para representar uma lista linear estatica
 */
typedef struct
{
    int n;
    int *data;
    int size;
} Lista;

/**
 * @brief Mostra as informacoes de uma lista
 *
 * @param lista
 */
void ListInfo(Lista *lista);

/**
 * @brief Cria uma nova lista
 *
 * @param size Tamanho maximo da lista
 * @return Lista*
 */
Lista *ListNew(int size);

/**
 * @brief Imprime os elementos de uma lista
 *
 * @param lista Lista a ser impressa
 */
void ListPrint(Lista *lista);

/**
 * @brief Insere um elemento em uma lista
 *
 * @param lista Lista para inserir o elemento
 * @param data Elemento a ser inserido
 */
void ListInsert(Lista *lista, int data);

/**
 * @brief Remove um elemento de uma lista
 *
 * @param lista Lista para remover o elemento
 * @param pos Posicao do elemento a ser removido
 */
void ListRemove(Lista *lista, int pos);

/**
 * @brief Aumenta o tamanho de uma lista
 *
 * @param lista Lista para aumentar o tamanho
 * @param newSize Novo tamanho da lista
 */
void ListExpand(Lista *lista, int newSize);

/**
 * @brief Diminui o tamanho de uma lista
 *
 * @param lista Lista a ser diminuida
 */
void ListReduce(Lista *lista);

/**
 * @brief Exclui uma lista
 *
 * @param lista Lista a ser exluida
 */
void ListFree(Lista *lista);

#endif