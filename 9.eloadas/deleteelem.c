@q = head;@ @p = head->next;@
while (@p != NULL && p->data != data@) {
	@q = p;@ @p = p->next;@
}
if (@p != NULL@) { /* megvan */
	@q->next = p->next;@
	@free(p);@
}

