int a, b;
int *p; /* int pointer */

@a = 2;@
@b = 3;@
@p = &a;@ /* p a-ra mutat */
@*p = 4;@ /* a = 4 */
@p = &b;@ /* p b-re mutat */
@*p = 5;@ /* b = 5 */
