#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

   setlocale(LC_ALL,"Turkish");

  /*
    char isim[4] ="Cam";

    for(int i=0; i<3; i++){
        printf("%d. eleman� = %c\n",i+1,isim[i]);
    }
  */


//Buras� char i�inde yazmak i�in 2.y�ntem
/*
  char isim[4] = {'C','a','m','\0'};
  for(int i=0; i<3; i++){
        printf("%d. eleman� = %c\n",i+1,isim[i]);
        if(isim[i]=='m'){
            printf("\nDizimiz Tamamland�...\n");
        }

   }
*/



/*
    char takimismi[] = {'B','a','r','�','a','\0'};
    for(int i=0; i<6; i++){
        printf("%c ",takimismi[i]);
    }
    printf("XXXXXXXXXXX");
*/


/*
    char takimismi[] = {'B','a','r','�','a','\0'};
        printf("%s ",takimismi);
        printf("XXXXXXXXXXX");
*/



/*
    char takimismi[]="Barcelona";
    printf("%s",takimismi);
*/



    char ulkeler[7];   //char 1 byte (karakter ba��na)
    int i;

        for(i=0; i<6; i++){
            printf("L�tfen bir karakter dizisini giriniz...\n");
            scanf(" %c",&ulkeler[i]);
        }

        printf("D�ng� Bittii...\n");


    return 0;
}
