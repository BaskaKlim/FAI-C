#include <stdio.h>

int main(){
//TODO: Program precita znak z konzoly a vypise nasledujuci znak aj jeho ASCII kod
int c;
int cNew;

printf("\n Zadaj jeden znak abecedy: ");
c = getchar();

cNew = c+1;
//na zistenie ASCII kodu ti staci pre dany c znak dat nacitat jeho %d hodnotu
printf("\nZadal si: %c (ASCII %d)",c,c);
printf("\n%c (ASCII %d)",cNew,cNew);

return 0;

}

