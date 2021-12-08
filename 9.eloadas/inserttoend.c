for (@p = head@; @p->next != NULL@; @p = p->next@);
@p->next = (listelem*)malloc(sizeof(listelem));@
@p->next->data = 5;@
@p->next->next = NULL;@
