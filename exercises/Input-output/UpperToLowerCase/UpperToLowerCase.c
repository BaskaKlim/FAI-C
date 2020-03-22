#include <stdio.h>
#include <ctype.h> //lolower(string)
#include <string.h> //strlwr(string) a strupr(string)

int main(){
char sUpperOne;
char sUpperTwo;
char sUpperTree;


printf("Zadaj 3 velke pismena: ");
scanf("%c %c %c",&sUpperOne,&sUpperTwo,&sUpperTree);
printf("Velke pismena %c %c %c sa prepisu na male: %c %c %c",sUpperOne,sUpperTwo,sUpperTree,strlwr(sUpperOne),strlwr(sUpperTwo),strlwr(sUpperTree));

return 0;

}
