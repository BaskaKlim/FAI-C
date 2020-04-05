/*************************
TOD: read the letter
and convert all lowercase
to uppercase characters to
console and print length of
the longest line
**************************/

#include <stdio.h>
/* POSTUP
1. zadefinovanie premennych
2. otvorenie suboru + test
3. vytlacenie znaku + algoritmus na prevod z lower na Upper
4. check konca riadky a vramci tohto checku este

*/
int main(){

FILE *fr;
int c, lines =0, theLongest =0;

fr=fopen("letter.txt","r");


while ((c=getc(fr))!= EOF){
//namiesto bezneho putchar(c) tu napisem terarny operator pre zmenu upper a lowercase z malych na velke cez  c+ 'A'-'a'
    putchar(c >='a' && c <= 'z' ? c +'A'-'a' : c);
//check konca riadky
    if(c == '\n'){
        if(theLongest< lines){
            theLongest = lines;
        }
        lines = 0;
    } else {
        lines++;
    }
}
printf("\n Najdlhsi riadok obsahoval %d znakov", theLongest);

fclose(fr);
return 0;
}

