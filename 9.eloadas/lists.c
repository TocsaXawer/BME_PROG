#include <stdlib.h>
#include <stdio.h>

typedef struct listelem {
	int data;              /* a tárolt adat */
	struct listelem *next; /* köv. elem címe */
} listelem;


void traverse(listelem *head) {
	listelem *p = head;
	while (p != NULL)
	{
		printf("%d ", p->data);
		p = p->next;
	}
}


listelem *push_front(listelem *head, int d)
{
	listelem *p = (listelem*)malloc(sizeof(listelem));
	p->data = d;
	p->next = head;
	head = p;
	return head;
}


listelem *pop_front(listelem *head)
{
	if (head != NULL) /* nem üres */
	{
		listelem *p = head;
		head = head->next;
		free(p);
	}
	return head;
}


listelem *push_back(listelem *head, int d)
{
	listelem *p;

	if (head == NULL)   /* üres listát külön kezelni */
		return push_front(head, d);

	for (p = head; p->next != NULL; p = p->next);
	p->next = (listelem*)malloc(sizeof(listelem));
	p->next->data = d;
	p->next->next = NULL;
	return head;
}


listelem *pop_back(listelem *head)
{
	listelem *p;

	if (head == NULL ) /* üres */
		return head;

	if (head->next == NULL) /* egyetlen elem */
		return pop_front(head);

	for (p = head; p->next->next != NULL; p = p->next);
	free(p->next);
	p->next = NULL;
	return head;
}


listelem *insert_sorted(listelem *head, int d)
{
	listelem *p, *q;

	if (head == NULL || head->data > d) /* rövzár */
		return push_front(head, d);

	q = head;
	p = q->next;
	while (p != NULL && p->data <= d) /* rövzár */ {
		q = p; p = p->next;
	}
	q->next = (listelem*)malloc(sizeof(listelem));
	q->next->data = d;
	q->next->next = p;
	return head;
}




listelem *delete_elem(listelem *head, int d)
{
	listelem *p = head;

	if (head == NULL) return head;

	if (head->data == d) return pop_front(head);

	while (p->next != NULL && p->next->data != d)
		p = p->next;
	if (p->next != NULL)
	{
		listelem *q = p->next;
		p->next = q->next;
		free(q);
	}
	return head;
}


void dispose_list(listelem *head)
{
	while (head != NULL)
		head = pop_front(head);
}


int main(void)
{
    listelem *head = NULL;
    dispose_list(head);
    return 0;
}

