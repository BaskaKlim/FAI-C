#include <stdio.h>
#include <string.h>

int main(){
char string[4];

printf("Zadaj 3 velke pismena: ");
scanf("%s",&string);
printf("Velke pismena %s sa prepisu na male: %s",string, strlwr(string));


return 0;

}
