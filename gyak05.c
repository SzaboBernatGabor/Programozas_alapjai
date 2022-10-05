#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MERET 5
int main() 
{
    
    //1
    int tomb[MERET];
    int tomb2[] = {1,2,3,4,5,6};
    for (int i = 0; i < MERET; i++)
    {
        tomb[i]=i*2;
    }
    int meret2 = sizeof(tomb2) / sizeof(int);
    for (int i = 0; i < MERET; i++)
    {
        printf("a %d. elem: %d\n", i+1, tomb[i]);
    }

    //2
    int i, j;
    int lotto[MERET], jelolt;
    srand(time(0));
    for (i = 0; i < MERET; i++)
    {
        jelolt = rand()%90+1;
        for (j=0; j<i; j++)
        {
            if(lotto[j]==jelolt)
            break;
        }
        if(j==i)
        {
            lotto[i]=jelolt;
            i++;
        }
    }
    for (i = 0; i < MERET; i++)
    {
        printf("%d. szam: %d\n", i+1, lotto[i]);
    }
    

    //3
    double tomb3[] = {289.5, 292.6, 290.2, 295.5, 300.4, 300.3, 302.5, 303.3, 303.5, 299.9};
    int db = 0;
    int meret = sizeof(tomb3)/sizeof(double);
    for (i = 0; i < meret; i++)
    {
        printf("\n A(z) %d. elem: %.1lf", i, tomb3[i]);
    }
    for (i = 0; i < meret; i++)
    {
        if(tomb3[i]<300)
        {
            db++;
        }
    }
    printf("\nDarabszam: %d",db);
    printf("\n300 alatt: %d db volt", db);
    int found = 0;
    for(i = 1; i < (meret && !found); i+=1)
    {
        if (tomb3[i]<tomb3[i-1])
        {
            found = 1;
        }
    }
    printf("\nA sorozat monoton novekvo: %s", found ? "igaz" : "hamis");
    int minindex = 0;
    for(i = 1; i<meret;i++)
    {
        if(tomb3[i]<tomb3[minindex])
        minindex=i;
    }
    printf("\nA sorozat legkisebb eleme: %lf, sorszama %d", tomb3[minindex], minindex+1);
    int maxindex = 0;
    for(i = 1; i < meret; i++)
    {
        if(tomb[i]>tomb3[maxindex])
        maxindex=i;
    }
    printf("\nA sorozat legnagyobb eleme: %lf, sorszama %d", tomb3[maxindex], maxindex+1);

    //4
    double osszeg = 0;
    double atlag = 0;
    for(i = 0; i < meret; i++)
    {
        osszeg+=tomb3[i];
    }
    atlag = osszeg / meret;
    printf("\nAz atlag: %.2lf", atlag);
    double szoras = 0;
    for (i = 0; i < meret; i++)
    {
        szoras = atlag - tomb3[i];
        printf("\nA %d. elem szórása: %.2lf", i, szoras);
    }
    return 0;
}