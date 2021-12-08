@p = head;@
while (@p->next->next != NULL@)
	@p = p->next;@
@free(p->next);@
@p->next = NULL;@
