#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Turkish");

    char sifre[80];
    char sifreDogrulama[80];

    int i;
    int yanlis;


    while(1){
        yanlis = 0;
        i = 0;


        printf("Parolan�z� girin: ");
        scanf("%s",&sifre);
        printf("Parolan�z� tekrar girin: ");
        scanf("%s",&sifreDogrulama);

        while(!(sifre[i]=='\0' && sifreDogrulama[i]=='\0')){
            if(sifre[i]!=sifreDogrulama[i]){
                printf("�ki �ifreyi de ayn� giriniz !!!\n");
                yanlis =1;
                break;
            }
            else{
                i++;
            }
        }
        if(yanlis==0){
            printf("�ifreyi do�ru girdiniz !!!\n");
            break;
        }
    }



    return 0;
}
