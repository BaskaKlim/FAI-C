#include <limits.h>

int GetMin(int arrayPole [], int sizeOfArray)
{
int min = INT_MAX;

for(int i=0; i < sizeOfArray; i++){
    if (min  >  arrayPole[i])
    {min = arrayPole[i];}
}
return  min;
}

int GetMax(int arrayPole [], int sizeOfArray)
{
int max=INT_MIN;

for(int i=0; i < sizeOfArray; i++){
    if(max < arrayPole[i])
    {max = arrayPole[i];}
}
  return max;
}

void Minimax(int arrayPole [], int sizeOfArray, int * ukmin, int * ukmax)
{
    int max = GetMax(arrayPole, sizeOfArray);
    int min = GetMin(arrayPole, sizeOfArray);

    *ukmin = min;
    *ukmax = max;
}

int Factorial(int enteredNumber)
{
    int result = enteredNumber;
    while (enteredNumber > 1)
    {
        enteredNumber --;
        result = result * enteredNumber;
    }
    return result;
}

int Fibonacci(int enteredNumber)
{
    // First 2 numbers of Fibonacci sequence are fixed as 0 and 1, each other number is sum of 2 values before itself
    int  firstValue = 0, secondValue = 1, nextValue, i;
      for ( i = 0 ; i < enteredNumber ; i++ )
      {
         if ( i <= 1 )
            nextValue = i;
         else
         {
            nextValue = firstValue + secondValue;
            firstValue = secondValue;
            secondValue = nextValue;
         }
      }
   return nextValue;

}
