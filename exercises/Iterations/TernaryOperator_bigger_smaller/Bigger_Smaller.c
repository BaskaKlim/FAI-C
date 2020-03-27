/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str66/ prklad 2
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 *
 **********************************/

 #include <stdio.h>


 int main(){

 int a,b;
 printf("Napiste 2 cisla: ");
 scanf("%d,%d",&a,&b);

 (a>b) ? (printf("Mensie cislo %d",b), printf("\nVacsie cislo %d",a)) : (printf("Mensie cislo %d",a), printf("\nVacsie cislo %d",b));

 return 0;
 }
