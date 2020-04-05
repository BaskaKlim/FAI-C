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

    if(c== 'o' || c=='O') {
        fw=stdout; //vypis na obrazovku ako putc(c,stdout) = putchar(c)
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


            fw=fopen("VYPIS.txt","w");
        }
    }
    printf("Piste text, ktory chcete ulozit do suboru a ukoncite ho znakom *\n");
    while((c=getchar())!= '*') {
        putc(c,fw);
    }
    if (fw != stdout) {
        fclose(fw);
    }



    return 0;
}
