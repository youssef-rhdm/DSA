#include <stdlib.h>
#include <libc.h>

typedef struct node
{
	int data;
	struct node *next;
} node;

node *create_node(int data)
{
	node *new_node = malloc(sizeof(node));
	if (!new_node)
		return NULL;
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}
void push_node(node **head, int data)
{
	node *new_node = create_node(data);
	if (!new_node)
		return ;
	new_node->next = *head;
	*head = new_node;
}

int main(int argc, char const *argv[])
{
	unsigned char i;

	i =128;
	while(i!=0)
	{
		printf("%d\n", i);
		i>>=1;
	}

	return 0;
}
