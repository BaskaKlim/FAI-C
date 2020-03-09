#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

//file declaration, opening and testing if the file exist

   FILE *fr;
   fr = fopen("C:/Users/barbara.klimekova/fai/c/ukol1/data.csv", "r");
   if (fr == NULL){
        printf("\n Failed to open your file.\n");
   return 1;
   }

   //declaration of variables according to brief
   char rez[1024],name[256], nameOfTheYounges[256], nameOfTheOldest[256];

   int height,weight,minAge,maxAge;
   int sumAge =0, sumWeight =0, sumHeight =0, age=0;
   //adding special variables who we are going to use as counters for rows(people data) and counter of errors
   int count = 0;
   int numberOfRow = 0;

   //while loop with function fgets that scans rez and saves the values to the memory , form of fgets(meno retazca, velkost retazca, meno suboru)
    while (fgets(rez, 1024, fr) !=NULL) {
            int numberOfData = sscanf(rez, "%[^;]; %d; %d; %d", name, &age, &height, &weight);

    /*testing the date in one row,we should have 4 values (variables) in one row,according to brief,
    we have to pass also option if there are less or more values and print some error message */

            if(numberOfData > 4){
                printf("File Row contains more data that it is expected");
                count++;
            }
            if(numberOfData < 4){
                printf("File Row contains less data that it is expected");
                count++;
            } else{
                if(numberOfRow==0){
                maxAge= age;
                minAge = age;

            } else {
                if (age > maxAge) {
                maxAge = age;
                strcpy(nameOfTheOldest, name);
                }
                else if(age < minAge) {
                minAge = age;
                strcpy(nameOfTheYounges, name);
                }

            sumWeight = sumWeight + weight;
            sumHeight = sumHeight + height;
            sumAge = sumAge + age;

            }
            numberOfRow++;
        }
    }
    printf("The youngest person is: %s,  with age of: %d years \n", nameOfTheYounges, minAge);
    printf("The oldest person is: %s, with age of: %d years \n", nameOfTheOldest, maxAge);
    printf("Average age of people: %d \n", sumAge /numberOfRow);
    printf("Average height is: %d \n", sumHeight /numberOfRow);
    printf("Average weight is: %d \n", sumWeight /numberOfRow);

      /*closing file*/
   fclose(fr);
   return 0;
}
