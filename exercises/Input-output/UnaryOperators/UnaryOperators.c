#include <stdio.h>

int main(){
int a = 2;
int b = 2;
int c = 1;
int d = 0;
int e = 4;

double aa = a++/++c*--e ;
double bb = (--b * c++) - (a);
double cc = (-b) - (--c);

//double print je cez %f a vieme ohranicit kolko cisel ma zobrazit %6.2 zobrazi 6 cislic z toho 2 desatinne

printf("\n a) a++ / ++c * --e => 2 / 2 *3 = 3 a to je rovne %6.2f", aa);
printf("\n terajsie hodnoty su: a=%d c=%d e=%d", a,c,e);


printf("\n b) --b * c++ - a => 1*1-2 = -1 a to je rovne %6.2f \n",bb);
printf("\n terajsie hodnoty su: b=%d c=%d a=%d",b,c,a);

printf("\n c) -b - --c => -2- 0 = -2 a to je rovne %6.2f \n",cc);
printf("\n terajsie hodnoty su: b=%d c=%d ",b,c);
}
