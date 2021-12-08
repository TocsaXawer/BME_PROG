#include<stdio.h>

typedef struct
{
	char neptun[6];
	unsigned int kiszhpont;
	unsigned int hianyzasok;
} hallgato;

int main(void)
{
	hallgato evfolyam[3] = {
		{{'A','B','C','1','2','3'},0,0},
		{{'D','E','F','4','5','6'},0,0},
		{{'G','H','I','7','8','9'},0,0}};
	char c[6];
	int i, j, ind;
	int vege = 0;
	unsigned int pont, hiany;
		
	printf("Add meg az adatokat:\n");
	while(@!vege@){
		scanf("%u %u %c%c%c%c%c%c", &pont, &hiany,
			&c[0], &c[1], &c[2], &c[3], &c[4], &c[5]);
		for(i=0; @i<3@; i=@i+1@){
			for(@j=0@; j<6; j=j+1){
				if(@(evfolyam[i].neptun)[j] != c[j]@)
					break;
			}
			if(@j==6@){
				@evfolyam[i]@.kiszhpont =
					evfolyam[i].kiszhpont + pont;
				evfolyam[i].hianyzasok =
					evfolyam[i].hianyzasok + hiany;
				break;
			}
		}
		vege = ( c[0] == '0' );
	}
	printf("Indexek:\n");
	scanf("%d", &ind);
	while(ind>=0){
		if(@ind<3 && evfolyam[ind].hianyzasok<4@)
			printf("Pont: %u", @evfolyam[ind].kiszhpont@);
		else
			@printf("Nem ervenyes.\n")@;
		scanf("%d", &ind);
	}
	return 0;
}