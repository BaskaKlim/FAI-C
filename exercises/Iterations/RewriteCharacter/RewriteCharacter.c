/**********************************
 *
 * Ucebnice_jazyka C        ver. 1.0
 * str64/ prklad 2
 * ===============================
 *
 * vypracovala:barbara     marec 2020
 *
 * TODO: Precitaj znaky z klavesnice a
 * vypis ich do konzoly. Biele znaky ako
 * medzeru a tabulator nahrad #.
 * Akonahle precitas * skonci
 **********************************/


#include <stdio.h>

int main(){

/*
Postup:
1. nacitat znaky
2. podmienka skoncenia - while = '*'
3. vnutorne prikazy - cez switch pripady ak '' alebo '\t' napis #
4. vnutorny default prikaz - inak vypis vlozeny znak
*/
int c;
    while((c = getchar()) != '*'){
        switch(c){
            case ' ':
            case '\t':
                putchar('#');
                break;

            default:
                putchar(c);
                break;
       }
    }
    return 0;
}
