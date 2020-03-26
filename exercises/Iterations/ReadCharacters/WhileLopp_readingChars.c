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

 //kym sa stisknuty znak na klavesnici nerovna z
 while((character=getchar()) != 'z') {
    //iba ak to nie je neviditelny znak
    if(character >= ' ')
    //vypis znak
    putchar(character);
 }

 printf("\nReading characters was ending\n");
 return 0;

 }
