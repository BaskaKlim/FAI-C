#include <stdio.h>
//TODO: program, ktory precita realne cislo a vypise iba jeho celu cast
int main(){

float input; // print a scan je %f
double inputDouble; // print a scan je %lf
long double inputLongDouble; // print a scan je %Lf
int result;

printf("Napis realne cislo: ");
scanf("%lf",&inputDouble);

result = (int)inputDouble;

printf("Cela cast cisla %lf je: %d ", inputDouble, result);

}
