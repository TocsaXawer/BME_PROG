#include <stdio.h>

/* kutyaszínek tárolására használt felsorolás típus */
typedef enum { BLACK, WHITE, RED } dog_color;

typedef struct
{
    char name[11];   /* név max 10 karakter + lezárás */
    dog_color color; /* szín */
    int nLegs;       /* lábak száma */
    double height;   /* magasság */
} dog;


/* kutyák kiírása és beolvasása bináris fájlba/ból */
void binary(dog dogs[], dog newdogs[], size_t n)
{
    FILE *fid;
    char *fname = "dogs.dat";

    if ((fid = fopen(fname, "wb")) == NULL) {
        fprintf(stderr, "Hiba a %s fájl megnyitásakor!\n", fname);
        return;
    }

    if (fwrite(dogs, sizeof(dog), n, fid) != n) {
        fprintf(stderr, "Hiba a kutyusok kiírásakor.\n");
        fclose(fid);
        return;
    }

    if (fclose(fid) != 0) {
        fprintf(stderr, "Hiba a %s fájl lezárásakor.\n", fname);
        return;
    }


    if ((fid = fopen(fname, "rb")) == NULL) {
        printf("Baj van\n");
        fprintf(stderr, "Hiba a %s dogs.dat fájl megnyitásakor!\n", fname);
        return;
    }

    if (fread(newdogs, sizeof(dog), n, fid) != n) {
        printf("Baj van\n");
        fprintf(stderr, "Hiba a kutyusok visszaolvasásakor.\n");
    }

    fclose(fid);
}

/* kutyák kiírása és beolvasása szöveges fájlba/ból */
void text(dog dogs[], dog newdogs[], size_t n)
{
    FILE *fid;
    size_t i;
    char *fname = "dogs.txt";

    if ((fid = fopen(fname, "w")) == NULL) {
        fprintf(stderr, "Hiba a %s fájl megnyitásakor!\n", fname);
        return;
    }

    for (i = 0; i < n; ++i)
    {
        dog d = dogs[i];
        fprintf(fid, "%s %u %d %f\n", d.name, d.color, d.nLegs, d.height);
    }

    if (fclose(fid) != 0) {
        fprintf(stderr, "Hiba a %s fájl lezárásakor.\n", fname);
        return;
    }


    if ((fid = fopen(fname, "r")) == NULL) {
        fprintf(stderr, "Hiba a %s fájl megnyitásakor!\n", fname);
        return;
    }

    for (i = 0; i < n; ++i)
    {
        dog d;
        if (fscanf(fid, "%s %u %d %lf", d.name, &d.color, &d.nLegs, &d.height) != 4)
        {
            fprintf(stderr, "Hiba az %zu. kutyus visszaolvasásakor\n", i);
            fclose(fid);
            return;
        }
        newdogs[i] = d;
    }

    fclose(fid);
}


int main(void)
{
    enum { N = 5 }; /* a kutyák száma (konstans) */

    dog dog_array[N] = /* 5 kutya tömbje */
    {
        { "blöki", RED,   4, 1.12 },
        { "cézár", BLACK, 3, 1.24 },
        { "buksi", WHITE, 4, 0.23 },
        { "spider", WHITE, 8, 0.45 },
        { "mici",  BLACK, 4, 0.456 }
    };

    dog new_dog_array[N]; /* ide fogjuk visszaolvasni a kutyusokat */

    /* írás-olvasás szöveges fájlba */
    text(dog_array, new_dog_array, N);

    /* írás-olvasás bináris fájlba */
    binary(dog_array, new_dog_array, N);

    return 0;
}
