#include <stdlib.h>
#include <stdio.h>

typedef struct listelem {
	int data;
	struct listelem *next;
	struct listelem *prev;
} listelem;


typedef struct {
	listelem *head;
	listelem *tail;
} list;


list create_list(void)
{
	list l;
	l.head = malloc(sizeof(listelem));
	l.tail = malloc(sizeof(listelem));
	l.head->next = l.tail;
	l.tail->prev = l.head;
	return l;
}


int isempty(list l)
{
	return (l.head->next == l.tail);
}


void delete(listelem *p)
{
	p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);
}


int pop_front(list l)
{
	int data = l.head->next->data;
	if (!isempty(l))
		delete(l.head->next);
	return data;
}


int pop_back(list l)
{
	int data = l.tail->prev->data;
	if (!isempty(l))
		delete(l.tail->prev);
	return data;
}


void remove_elem(list l, int data)
{
	listelem *p = l.head->next;
	while (p != l.tail && p->data != data)
		p = p->next;
	if (p != l.tail)
		delete(p);
}


void dispose_list(list l)
{
	while (!isempty(l))
		pop_front(l);
	free(l.head);
	free(l.tail);
}



void insert_between(listelem *prev, listelem *next,
	int data)
{
	listelem *p = malloc(sizeof(listelem));
	p->data = data;
	p->prev = prev;
	prev->next = p;
	p->next = next;
	next->prev = p;
}


void push_front(list l, int data)
{
	insert_between(l.head, l.head->next, data);
}


void push_back(list l, int data)
{
	insert_between(l.tail->prev, l.tail, data);
}


void insert_sorted(list l, int data)
{
	listelem *p = l.head->next;
	while (p != l.tail && p->data <= data)
		p = p->next;
	insert_between(p->prev, p, data);
}


void print_list(list l)
{
	listelem *p;
	for (p = l.head->next; p != l.tail; p = p->next)
		printf("%3d", p->data);
}


int main(void)
{
	list l = create_list();
	push_front(l, 1);
	push_back(l, -1);
	insert_sorted(l, -3);
	insert_sorted(l, 8);
	remove_elem(l, 1);
	print_list(l);
	dispose_list(l);
	return 0;
}

