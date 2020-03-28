/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str66/ prklad 4
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 * TODO: vypocet decimalnej hodnoty
 * hexadecimalneho cisla z 2 znakov
 **********************************/

 #include <stdio.h>

 /* POSTUP:
 1. definovat si rozsahy
 2. validacia prveho znaku, hodnota v hexa aj v decimal sustave
 3. validacia druheho znaku hodnota v hexa aj v decimal sustave
 4. prevod hexadecimalneho cisla na decimalne
 */


 /** zabezpecenie stanoveneho rozsahu **/
#define number(a)     (a >= '0' && a <= '9')      // len znaky v rozsahu '0' az '9'
#define upperCase(a)  (a >= 'A' && a <= 'F')   // len znaky v rozsahu 'A' az 'F'
#define hexa(a)      (number(a) || upperCase(a))     // len znaky v rozsahu '0' az '9', 'A' az 'F' - nase rozhranie


 int main(void){
    int char1,char2, decimal;
    char c, d;

/** validacia prveho znaku **/
    printf("Zadaj prvy znak od 0-9 alebo A-F a stlac Enter: \n");
    scanf("%c",&c);

// odstranenie znaku Enter
    while (getchar() != '\n')
        ;
// ak je cislo v nasom rozhrani - cize  hexa(c)
    if (hexa(c)) {

// z ASCII na hexadecimal
/*****************************************************************
* 'A' = 65 decimalne, hexadecimalne 'A' = 10, takze 65 - 55 = 10 *
* '0' = 48 decimalne, hexadecimalne '0' = 0, takze 48 - 48 = 0   *
* nasledujuci riadok vypocita spravnu hexadecimalnu hodnotu znaku    *
******************************************************************/
// ak je to cislo, odpocitaj 48, ak to nie je cislo (teda su to znaky, odpocitaj 55 a prirad tuto hodnotu do char1
        char1 = number(c) ? c - 48 : c - 55;
        printf("\n%c(hexadecimalne) = %d\n\n", c, char1); // vypis hodnoty
    }
    else
        printf("\nMimo stanoveny rozsah!\n\n"); //ak nie, mimo limit

// vypocet znaku na decimalne cislo : hodnota prveho znaku * 16 na prvu
     decimal = char1 *16;
     printf("\n%d(decimalne)= %d\n\n ",char1, decimal);

/** validacia druheho znaku **/
    printf("\nZadaj druhy znak od 0-9 alebo A-F a stlac Enter: \n");
    scanf("%c",&d);

// odstranenie znaku Enter
    while (getchar() != '\n')
        ;
// ak je cislo v nasom rozhrani - cize  hexa(c)
    if (hexa(d)) {
// z ASCII na hexadecimal
        char2 = number(d) ? d - 48 : d - 55;
        printf("\n%c(hexadecimalne) = %d\n\n", c, char2); // vypis hodnoty
    }
    else
        printf("\nMimo stanoveny rozsah!\n\n"); //ak nie, mimo limit

// vypocet znaku na decimalne cislo : hodnota prveho znaku * 16 na nultu cize *1
     decimal = char2 *1;
     printf("\n%d(decimalne)= %d\n\n ",char1, decimal);


/** vypocet hodnoty zadaneho hexadecimalneho cisla **/

    decimal = char1*16 + char2;
    printf("\nHexadecimalne cislo %c%c ma decimalnu hodnotu: %d\n",
           c, d, decimal);

return 0;
 }
