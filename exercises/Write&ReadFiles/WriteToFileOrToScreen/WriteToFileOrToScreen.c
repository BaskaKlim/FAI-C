#include <stdio.h>

int main() {
    FILE *fw;
    int c;

//moznosti pre pouzivatela
    printf("Stlacte o pre vypis na obrazovku\n");
    printf("Stlacte iny znak pre vypis do suboru VYPIS.txt\n");

//nacitanie, co stiskol
    c=getchar();
//vyprazdenie bufferu kedze getchar nacita aj stisnutie enter
    while(getchar() != '\n')
        ;

        //ak staci o
    if(c== 'o' || c=='O') {
        fw=stdout; //vypis na obrazovku ako putc(c,stdout) = putchar(c)
    // ak stlaci iny znak
    } else {
        if ((fw=fopen("VYPIS.txt","w")) != NULL) {
            printf("Soubor VYPIS.txt existuje, prepsat[A/N]: ");
            c=getchar();
            while(getchar() != '\n')
                ;

            if (fclose(fw) == EOF) {
                printf("Chyba pri uzatvoreni suboru\n");
                return 1;
            }

            if (!(c=='A' || c=='a')) {
                return 0; //koniec programu, nechceme prepsat subor
            }


            if((fw=fopen("VYPIS.txt","w"))==NULL){
               printf("Subor sa nepodarilo otvorit\n");
               return 1;
               }
        }
    }
    //po ktorejkolvek moznosti pokracuje opat s komunikaciou s userom
    printf("Piste text, ktory chcete ulozit do suboru a ukoncite ho znakom *\n");
    while((c=getchar())!= '*') {
        putc(c,fw);
    }
    //ak to nie je konsolovy zapis, ukonci subor
    if (fw != stdout) {
        if(fclose(fw) == EOF) {
            printf("Subor sa nepodarilo zavriet\n");
            return 1;
        }
    }



    return 0;
}
