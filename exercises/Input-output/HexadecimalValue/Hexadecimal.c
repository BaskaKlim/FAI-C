#include <stdio.h>

int main(){
int unsigned cislo;

printf("Zadaj cislo od 0 do 255: ");
scanf("%d", &cislo);
printf("cislo %d je v hexadecimalnom tvare: %2X",cislo,cislo);
}
