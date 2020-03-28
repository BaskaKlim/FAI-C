/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str68/ prklad 7
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 * TODO: precte znak, zaradi ho do
 * typu znaku a vypise
 **********************************/


  #include <stdio.h>

/** zabezpecenie stanoveneho rozsahu **/
#define number(a)     (a >= 48 && a <= 57)   // len znaky v rozsahu '0' az '9'
#define upperCase(a)  (a >= 65 && a <= 90)   // len velke pismena
#define lowerCase(a)  (a >= 97 && a <= 122)   // len male pismena
// #define punctuationMark(a)  netreba, lebo to je vsetko okrem uz zadanych define


int main(void){

int c;
char char1;
printf("Zadaj znak na klavesnici: ");

c = getchar();

// odstranenie znaku Enter
    while (getchar() != '\n')
        ;
// SWITCH = case arguments cannot be evaluated at runtime. Use an if-else block to do that.

   if (number(c)){
        char1 = (char) c;
        printf("cislica: (%d) %c",c,char1 );
   } else if (lowerCase(c)) {
        char1 = (char) c;
        printf("male pismeno:(%d) %c",c,char1);
   } else if (upperCase(c)) {
        char1 = (char) c;
        printf("velke pismeno:(%d) %c",c,char1);
   } else {
        char1 = (char) c;
        printf("interpunkcny znak:(%d) %c",c,char1);
   }
return 0;
}
