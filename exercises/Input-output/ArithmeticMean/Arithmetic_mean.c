#include <stdio.h>

#define pocet(numbers)
//zadaj 3 realne cisla a vypocitaj aritm.priemer zaokruhleny na dve desariny
int main(){

    float numbers[10]={};
    float aritMean = 0.00;
    float sum =0.00;
    int pocetPrvkov;
    int pocetNenulovychPrvkov=0;

    printf("Zadaj prve realne cislo: ");
    scanf("%f",&numbers[0]);
    printf("\nZadaj druhe realne cislo: ");
    scanf("%f",&numbers[1]);
    printf("\nZadaj tretie realne cislo: ");
    scanf("%f",&numbers[2]);

    pocetPrvkov = sizeof(numbers)/sizeof(float);

    for(int i=0; i <pocetPrvkov; i++){
        if(numbers[i]!=0){
            sum = sum + numbers[i];
            printf("\nCislo: %f", numbers[i]);
            pocetNenulovychPrvkov++;
        }
    }
    printf("\nSuma je: %f",sum);

    aritMean= sum/pocetNenulovychPrvkov;

    printf("\nAritmeticky priemer cisel je: %f",aritMean);
}
