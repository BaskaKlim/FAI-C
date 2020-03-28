/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str68/ prklad 6
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 * TODO: precte znak, ak to nie je ani
 * pismeno ani cislica,vypise hlasku
 * mozme pouzit iba jedno if else
 **********************************/


  #include <stdio.h>


 /* POSTUP:
 1. definovat si rozsahy => cislice, male pismena, velke pismena
 2. vstup a jeho validacia podla rozsahu - ak splna tak hlasky
 3. ak nesplna tak ina hlaska
*/

/** zabezpecenie stanoveneho rozsahu **/
#define number(a)     (a >= '0' && a <= '9')   // len znaky v rozsahu '0' az '9'
#define upperCase(a)  (a >= 'A' && a <= 'Z')   // len velke pismena
#define lowerCase(a)  (a >= 'a' && a <= 'z')   // len male pismena
#define numsChars(a)  (number(a) || upperCase(a) || lowerCase(a))

int main(void){

char char1; // pozor, ak davam scanf musi to byt chat a hore v define porovnavam cez 'hodnota znaku', ak idem cez getchar tak je to integer a porovnavam v define bez ''

printf("zadaj znak na klavesnici: ");
scanf("%c", &char1);

// odstranenie znaku Enter
    while (getchar() != '\n')
        ;
        if (number(char1) || upperCase(char1) || lowerCase(char1)){
            printf("Alfanumericky znak");
        } else {
            printf("Interpunkcny znak");
        }

return 0;
}


