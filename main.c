/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrhandou <yrhandou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 15:06:12 by yrhandou          #+#    #+#             */
/*   Updated: 2025/02/17 15:34:34 by yrhandou         ###   ########.fr       */
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

int main(int argc, char *argv[])
{
	int i = 0;
	stack arr;

	arr.top = -1;
	while (argv[i])
	{
		push_int(&arr, atoi(argv[i]));
		i++;
	}
	while(i>-1)
	{
		printf("%d", arr.data[i]);
		i--;
	}

	return 0;
}
