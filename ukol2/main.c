#include <stdio.h>
#include "fce.h"
#include <stdbool.h>

void menu()
{
    //console options
    puts(
    "\n"
    "Press:\n"
    "\n"
    "1 for minmax - vrati minimum a maximum z pola integerov\n"
    "2 for minimum number - vrati najmensie cislo z pola\n"
    "3 for maximum number - vrati najvacsie cislo z pola \n"
    "4 for factorial - vypocita faktorial zadaneho cisla\n"
    "5 for Fibonacci sequence - vypocita n-ty prvok Fibonacciho postupnosti\n"
    "anything else for end.");
}

    //1. declare of inputs from console
    //2a. create function for entering the number and for adding number into the memory
int enterNumber(){
    int value;
    printf("Enter the number from 1 to 10: ");
    scanf("%d", &value);
    return value;
}
    //*2b. create function for printing array - each integer, attributes for function are array of integer and size of array */
void printArray(int p[], int sizeofArray){
    printf("Current array has these values: ");
    for(int i = 0; i < sizeofArray; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
}

    //3. declare the main
int main(int argc, char **argv)
{
    // 3.1.declare of variables
    int minimum, maximum,number,result;

    // 3.2. initializing of Array
    int p[] = {2,4,6,7,8,10};

    // 3.3. initializing of end state for loop as false (running0
    bool end = false;

    // 3.4. while loop with switch(option from console)
   do
   {
        // calling the menu function (console options)
        menu();
        // declaration of char[] and adding the content to memory
        char ret[1024];
        fgets(ret,1024, stdin);

        switch (ret[0])
        {
            //calling the methods with parameters - define in fce.c
        case '1':
            printArray(p, 6);
            Minimax(p, 6, &minimum, &maximum);
            printf("min = %d, max = %d\n", minimum, maximum);
            break;

        case '2':
            printArray(p, 6);
            minimum = GetMin(p, 6);
            printf("min = %d \n", minimum);
            break;

        case '3':
            printArray(p, 6);
            maximum = GetMax(p,6);
            printf("max = %d \n", maximum);
            break;

        case '4':
            number = enterNumber();
            result = Factorial(number);
            printf("Factorial of %d is:  %d \n", number, result);
            setbuf(stdin, NULL); // clear buffer, enterNumber is not holding any value, loop can continue
            break;

        case '5':
            number = enterNumber();
            result = Fibonacci(number);
            printf("So %d. Fibonacci sequence is %d \n", number, result);
            setbuf(stdin, NULL); // clear buffer, enterNumber is not holding any value, loop can continue
            break;

       default:
            end = true;
            break;
        }

    } while(!end);
}
