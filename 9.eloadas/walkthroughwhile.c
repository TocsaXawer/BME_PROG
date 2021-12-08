@listelem *p = head;@
while (@p != NULL@)
{
	@printf("%d ", p->data)@; /* p->data : (*p).data */
	@p = p->next;@            /* nyíl operátor */
}


