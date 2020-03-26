/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str56/ prklad
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 *
 * TODO: Cti znaky, neviditelne si
 * nevsimaj, ostatne vypisuj do konzoly
 * a zastav sa pri po precteni znaku"z"
 **********************************/

 #include <stdio.h>
 int main(){

 int character;

 //preskocenie vsetkych bielych znakov, telo while prikazu moze ostat prazne v tomto pripade
    while(character == ' ' || character == '\t' || character == '\n'){
    }

 //kym sa stisknuty znak na klavesnici nerovna z
    while((character=getchar()) != 'z') {
    //vypis znak
    putchar(character);
 }

 printf("\nReading characters was ending\n");
 return 0;

 }
