/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str67/ prklad 1
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 **********************************/

 #include <stdio.h>

 int main(){
 int i = 5;
 int j = 2;

 double f;
//pretypovanie cez (typ)
 f = (double) i/j;
 //vysledok na jedno desainne miesto
 printf("Vysledok je %4.1lf",f);

return 0;
 }
