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

fr = fopen("data.txt", "r");
fw = fopen("kopia.txt", "w");



while((c=getc(fr)) != EOF ){
putc(c,fw);
}


if( (fclose(fw)) == NULL){
 printf("Nepodarilo sa zavriet kopia.txt subor \n");
 }


if( (fclose(fr)) == NULL){
    printf("Nepodarilo sa zavriet data.txt subor \n");
}

return 0;
}
