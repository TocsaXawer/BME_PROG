@q = head;@  @p = q->next;@
while (@p != NULL && p->data <= data@) { /* rövidzár */
	@q = p;@  @p = p->next;@
}
@q->next = (listelem*)malloc(sizeof(listelem));@
@q->next->data = 4;@
@q->next->next = p;@

