#include <stdio.h>

int main() {

double a,b,c, max;

printf("Enter 3 double numbers splitted by comma : ");
scanf("%lf,%lf,%lf",&a,&b,&c);

if(a>b && a>c){
   max = a;
} else if(b>a && b>c){
    max = b;
} else
    max = c;
printf("Maximum is: %lf", max);
return 0;
}
