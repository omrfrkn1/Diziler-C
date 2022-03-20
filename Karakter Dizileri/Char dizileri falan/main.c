#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL,"Turkish");

  /*
    char isim[4] ="Cam";

    for(int i=0; i<3; i++){
        printf("%d. elemaný = %c\n",i+1,isim[i]);
    }
  */


//Burasý char içinde yazmak için 2.yöntem
/*
  char isim[4] = {'C','a','m','\0'};
  for(int i=0; i<3; i++){
        printf("%d. elemaný = %c\n",i+1,isim[i]);
        if(isim[i]=='m'){
            printf("\nDizimiz Tamamlandý...\n");
        }

   }
*/



/*
    char takimismi[] = {'B','a','r','ç','a','\0'};
    for(int i=0; i<6; i++){
        printf("%c ",takimismi[i]);
    }
    printf("XXXXXXXXXXX");
*/


/*
    char takimismi[] = {'B','a','r','ç','a','\0'};
        printf("%s ",takimismi);
        printf("XXXXXXXXXXX");
*/



/*
    char takimismi[]="Barcelona";
    printf("%s",takimismi);
*/



    char ulkeler[7];   //char 1 byte (karakter baþýna)
    int i;

        for(i=0; i<6; i++){
            printf("Lütfen bir karakter dizisini giriniz...\n");
            scanf(" %c",&ulkeler[i]);
        }

        printf("Döngü Bittii...\n");


    return 0;
}
