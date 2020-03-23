#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define POCET 3
//program, ktory precita 3 male pismena a vypise ich ako 3 velke v obratenom poradi

int main(){

char poleString [POCET];

char poleStringReverse[POCET];

printf("Zapiste 3 male pismena bez medzery za sebou: ");
scanf("%s",&poleString);

printf("\nMame pole %s", poleString);
printf("\nKonvertovali sme ich na velke pismena a v opacnom poradi: ");

for(int i=0; i < POCET; i++){
    poleStringReverse[i] = poleString[POCET - 1 - i];
    printf("%c", toupper(poleStringReverse[i]));
}
return 0;

}


