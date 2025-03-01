/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:06:12 by yrhandou          #+#    #+#             */
/*   Updated: 2025/02/18 17:29:57 by yrhandou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DS.h"

int isEmpty(stack *s)
{
	if (s->top == __INT32_MAX__ - 1)
		return 1;
	return 0;
}
void pop_int(stack *s)
{
	if (isEmpty(s))
	{
		printf("STACK UNDERFLOW WARNING !!! aborting");
		exit(1);
	}

	s->data[s->top] = 0;
	s->top = -1;
}

int isFull(stack *s)
{
	if (s->top > __INT32_MAX__ - 1)
		return 1;
	return 0;
}

void push_int(stack *s, int value)
{
	if (isFull(s))
	{
		printf("STACK OVERFLOW WARNING !!! aborting");
		exit(1);
	}
	s->top = +1;
	s->data[s->top] = value;
}
void lst_addfront(t_stack **lst, int data)
{
	t_stack *new_node = malloc(sizeof(t_stack));
	new_node->data = data;
	new_node->next = (*lst);
	(*lst) = new_node;
}
int main(int argc, char **argv)
{

	t_stack *head = malloc(sizeof(t_stack));
	head->data = atoi(argv[1]);
	head->next = NULL;
	t_stack *tmp;
	tmp = head;
	int i = 2;
	t_stack *new_node;
	while (i < argc)
	{
		new_node = malloc(sizeof(t_stack));
		new_node->data = atoi(argv[i]);
		new_node->next = NULL;
		tmp->next = new_node;
		tmp = new_node;
		i++;
	}

	tmp = head;
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	tmp = head;
	lst_addfront(&tmp, 0);
	printf("\n\n");
	// tmp = head;
	while (tmp)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}

	return 0;
}
