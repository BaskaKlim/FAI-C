#include <stdio.h>
#include <string.h> // strupr()

//brief: swap string of 3 characters
#define SIZE 3
// Function to reverse the string ~ using pointers
//void because do not need to return anything
void reverseString(char* string)
{
    int length, i;
    char *begin_ptr, *end_ptr, ch;

    // Get the length of the string but according to brief we can use constant SIZE 3
    length = strlen(string);

    // Set the begin_ptr and end_ptr , initially to start of string
    begin_ptr = string;
    end_ptr = string;

    // Move the end_ptr to the last character
    for (i = 0; i < length - 1; i++)
        end_ptr++;

    // Swap the char from start and end, index using begin_ptr and end_ptr , we use half of lenght to swipe not all
    for (i = 0; i < (length/2); i++) {

        // swap character
        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;

        // update pointers positions
        begin_ptr++;
        end_ptr--;
    }

}


int main()
{

    // Get the string
    char string[SIZE] = "";
    printf("Enter a string: \n");
    scanf("%s",&string);


    // Reverse the string
    reverseString(string);

    //using strupr() from <string.h> for UPPERCASE
    strupr(string);

    // Print the result
    printf("Reverse of the string: %s\n", string);

    return 0;
}
