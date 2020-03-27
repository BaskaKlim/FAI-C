/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str66/ prklad
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 *
 * TODO: Naprogramuj funkciu nasobenia
 * vyuzitim return prikazu
 **********************************/

#include <stdio.h>

int multiply(int a, int b){
     return a * b;
}


int main(){

int a,b,r;
printf("Zadaj dve cisla: ");
scanf("%d,%d",&a,&b);

;r = multiply(a,b);
printf("vysledok je: %d",r);
return 0;
}
