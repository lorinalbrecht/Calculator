#include <stdio.h>

// Function to enter value and Check if it is a valid Input
double enter_value(short round) // Parameter Round
{
    // Declaration of Variable
    double value = 0; // value as double
    int ret = 0; // ret to Check if the Enter is a number
    // do while loop to Check if the Enter is a number
    do
    {
        printf("Enter Your %d. Value: ", round);
        ret = scanf("%lf", &value);
        fflush(stdin);
        // Checking if ret is not equal to 1
        if (ret != 1)
        {
            printf("Your Enter is Invalid. Try again\n\n");
        }
    } while (ret != 1);

    // return input is value (double)
    return value;
}