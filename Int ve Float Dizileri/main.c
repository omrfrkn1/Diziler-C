#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

/*
    int sayilar[] = {5,10};

    printf("%d\n",sayilar[0]);
    printf("%d\n",sayilar[1]);
*/




/*
    int sayilar[] = {3,6,9,12,15};

    for(int i=0; i<5; i++){
        printf("Sayýlar isimli dizisinin %d. elemaný=%d\n",i+1,sayilar[i]);
    }

   printf("\n\n%d\n",sayilar[0]);
   printf("%d\n",sayilar[1]);
   printf("%d\n",sayilar[2]);
   printf("%d\n",sayilar[3]);
   printf("%d\n",sayilar[4]);

*/





/*
    float sayilar[]={1.5,2.7,3.8,123.9};

    //float 4byte

    for(int i=0; i<4; i++){
        printf("%.2f\n",sayilar[i]);
    }
*/




    int i;

    float sayilar[7]={};

     for(i=0; i<7; i++){
        printf("%f  ",sayilar[i]);
    }

    printf("\n");


    for(i=0; i<7; i++){
        printf("%d.elemaný giriniz...\n",i+1);
        scanf("%f",&sayilar[i]);
    }

    for(i=0; i<7; i++){
        printf("%f  ",sayilar[i]);
    }







    return 0;
}
