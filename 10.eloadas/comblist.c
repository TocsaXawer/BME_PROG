typedef struct student_elem {
  char name[50];             /* neve */
  color_t hair_color;        /* hajszíne (typedef) */
  struct student_elem *next; /* láncolás */
} student_elem;      /* hallgató listaelem */

typedef struct class_elem {
  char name[10];             /* osztály neve */
  student_elem *head;        /* hallgatók listája */
  struct class_elem *next;   /* láncolás */
} class_elem;        /* osztály listaelem */


typedef struct {
  char name[50];             /* neve */
  color_t hair_color;        /* hajszíne (typedef) */
} student_t;          /* hallgató adat */

typedef struct student_elem {
  student_t student;         /* a hallgató maga */
  struct student_elem *next; /* láncolás */
} student_elem;      /* hallgató listaelem */

typedef struct {
  char name[10];             /* osztály neve */
  student_elem *head;        /* hallgatók listája */
} class_t;           /* osztály adat */

typedef struct class_elem {
  class_t class;             /* az osztály maga */
  struct class_elem *next;   /* láncolás */
} class_elem;        /* osztály listaelem */
