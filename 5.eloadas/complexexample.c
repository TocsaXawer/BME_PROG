#include <stdio.h>
typedef struct{
	double x,y;
} vektor;
void v_kiir(vektor a){
   printf("(%lf;%lf)",a.x,a.y);
}
vektor eredo(vektor a,vektor b){
   vektor c;
   c.x=a.x+b.x;
   c.y=a.y+b.y;
   return c;
}
vektor nyujt(vektor a, double k){
   vektor c;
   c.x=k*a.x;
   c.y=k*a.y;
   return c;
}
int main(void){
   vektor v1={2.1,4.3}, v2={1.8,-1.5}, v3;
   printf("v1="); v_kiir(v1); printf("\n");
   printf("v2="); v_kiir(v2); printf("\n");
   printf("v1+v2="); v_kiir(eredo(v1,v2));
   v3=nyujt(v1,2.2);
   printf("\n2.2*v1="); v_kiir(v3);printf("\n");
   return 0;
}
