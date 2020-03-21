#include <stdio.h>

int main(){

int price;
int priceWithDPH;

printf("Zadajte cenu bez dane: ");
scanf("%d",&price);
//inicializovat priceWithDPH mozem az tu, ked mam nacitanu price funkciou scanf

priceWithDPH = price + (0.2*price);
printf("Predajna cena s DPH (20%%): %d", priceWithDPH);
}
