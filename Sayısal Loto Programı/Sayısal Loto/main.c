#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL,"Turkish");

    int rastgeleSayi;
    srand(time(NULL));

    int loto[49] = {0};

    printf("Sayýlar üretilmeye baþlanýyor...\n");

    for(int i=0; i<6; i++){
        rastgeleSayi = 1 + rand() % 49;

        while(loto[rastgeleSayi-1]==1){
            rastgeleSayi = 1 + rand() % 49;
        }

        loto[rastgeleSayi-1]= 1;
        printf("%d ",rastgeleSayi);

    }
    printf("\n\nSayýsal loto tamamlandý...\n");














//Rastgele Sayý Fonksiyonun Kullanýldýðý Bir Kýsým
/*
    int rastgeleSayi;
    srand(time(NULL));


// 0-32767 Random Sayýlarýn Aralýðý

//  [1,50)
//  1,2,3,4,5.....47,48,49



    for(int i=0; i<100; i++){
        rastgeleSayi =1 + rand()% 49;
        printf("%d\n",rastgeleSayi);
    }



*/




    return 0;
}
