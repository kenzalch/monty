#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *nw_nde, *aux;

	aux = *head;
	nw_nde = malloc(sizeof(stack_t));
	if (nw_nde == NULL)
	{
		printf("Error\n");
	}
	nw_nde->n = n;
	nw_nde->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = nw_nde;
		nw_nde->prev = NULL;
	}
	else
	{
		aux->next = nw_nde;
		nw_nde->prev = aux;
	}
}
