#include <stdio.h>

int main(){

//area of rentagle
int sideA;
int sideB;

int areaOfRentagle;

printf("Zadaj dlzku a sirku: \n" );
scanf("%d %d",&sideA, &sideB);
areaOfRentagle = sideA*sideB;
printf("\nObdlznik o dlzke %d a sirke %d ma obsah: %d \n",sideA,sideB,areaOfRentagle);

//area of square
int side;
int areaOfSquare;

printf("\nZadaj stranu stvorca: \n" );
scanf("%d",&side);
areaOfSquare = side*side;
printf("\nStvorec so stranou %d ma obsah: %d \n",side,areaOfSquare);

//area of triangle
int areaOfTriangel;
int sideC;
int hight;

printf("\nZadaj zakladnu a vysku trojuholnika: \n" );
scanf("%d %d",&sideC, &hight);
areaOfTriangel = (sideC*hight)/2;
printf("\nTrojuholnik so stranou %d a vyskoy %d ma obsah: %d \n",sideC,hight,areaOfTriangel);
}
