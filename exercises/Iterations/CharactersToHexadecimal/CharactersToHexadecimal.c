/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str66/ prklad 4
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 *
 **********************************/

 #include <stdio.h>
 #include <conio.h>

 int main(){
  int char1,char2;
  int decimal;

  printf("Zadaj dva znaky od 0-9 a A-F: ");

  char1=getch();

  if ((char1 >= 0 && char1 <=9) || (char1 >= 'A' && char1 <= 'F')) {
   // if ((two>= 0 && two <=9)|| (two>= 'A' && two <= 'F' )) {

     decimal = char1 *16;
     printf(" decimal: %d ", decimal);
     }
 // }
return 0;
 }
