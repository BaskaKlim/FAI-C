/*****************************
* autor:            Barbara
* verzia:           1.0
* datum:            5.4.2020
* TODO: test if program opens
* and closes FILE correctly
*
*****************************/

#include <stdio.h>

int main(){

FILE *fr, *fw;
int c;

if ( (fr = fopen("data.txt", "r")) == NULL){
    printf("nepodarilo sa otvorit data.txt subor");
}

if ( (fw = fopen("kopia.txt", "w")) == NULL){
    printf("nepodarilo sa otvorit kopia.txt subor");
}



while((c=getc(fr)) != EOF ){
putc(c,fw);
}


if(fclose(fw) == EOF){
 printf("Nepodarilo sa zavriet kopia.txt subor \n");
 }

if(fclose(fr) == EOF){
    printf("Nepodarilo sa zavriet data.txt subor \n");
}

return 0;
}
