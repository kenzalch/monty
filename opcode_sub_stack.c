#include "monty.h"
/**
 * f_stack - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}

/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int ss, ndes;

	aux = *head;
	for (ndes = 0; aux != NULL; ndes++)
		aux = aux->next;
	if (ndes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	ss = aux->next->n - aux->n;
	aux->next->n = ss;
	*head = aux->next;
	free(aux);
}
