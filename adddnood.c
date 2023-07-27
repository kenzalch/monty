#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnode(stack_t **head, int n)
{

	stack_t *nw_nde, *aux;

	aux = *head;
	nw_nde = malloc(sizeof(stack_t));
	if (nw_nde == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = nw_nde;
	nw_nde->n = n;
	nw_nde->next = *head;
	nw_nde->prev = NULL;
	*head = nw_nde;
}
