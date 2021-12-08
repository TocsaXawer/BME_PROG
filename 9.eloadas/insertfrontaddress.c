void push_front(@listelem **head@, int d)
{
	listelem *p = (listelem*)malloc(sizeof(listelem));
	p->data = d;
	p->next = *head;
	*head = p; /* *head változik, ez nem vész el */
}


listelem *head = NULL;  /* üres lista */
push_front(@&head@, 2);   /* címmel hívás */
push_front(&head, 4);

