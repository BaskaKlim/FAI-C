/**************************

TODO: program zapise cisla
od 1 do 10 kazde do noveho
riadku prazdneho suboru

***************************/
#include <stdio.h>

int main(){

FILE *fw; // file write

fw= fopen("demo.txt","w"); //fopen("file name", "type of action")

for (int i=1; i<11; i++){
    putc(i,fw);
}
fclose(fw);


}
