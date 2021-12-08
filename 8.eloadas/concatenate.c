#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* concatenate -- két sztring összefűzése
  dinamikusan foglal, az eredmény címét adja vissza
*/
char *concatenate(char *s1, char *s2) {
    size_t l1 = strlen(s1);
    size_t l2 = strlen(s2);
    char *s = (char *)malloc((l1+l2+1)*sizeof(char));
    if (s != NULL) {
        strcpy(s, s1);
        strcpy(s+l1, s2); /* vagy strcat(s, s2) */
    }
    return s;
}

int main(void)
{
char word1[] = "ló", word2[] = "darázs";

char *res1 = concatenate(word1, word2);
char *res2 = concatenate(word2, word1);
res2[0] = 'v';

printf("%s\n%s", res1, res2);

/* A függvény memóriát foglalt, felszabadítani! */
free(res1);
free(res2);

    return 0;
}

