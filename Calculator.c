/*
Programm            Taschenrechner
Autor               Lorin Albrecht
Date of Creation    11. January 2022
------------------------------------
Version             1
Update              11. January 2022
*/

// Include of Functions
#include <stdio.h>

// Function to enter value
double enter_value(short round) // Parameter Round
{
    // Declaration value as double
    double value = 0;
    // Declaration ret to Check if the Enter is a number
    int ret = 0;
    // do while loop to Check if the Enter is a number
    do
    {
        printf("Enter Your %d. Value: ", round);
        ret = scanf("%lf", &value);
        fflush(stdin);
        if (ret != 1)
        {
            printf("Your Enter is Invalid. Try again\n\n");
        }
    } while (ret != 1);

    // return input is value (double)
    return value;
}

// Main Function
int main()
{
    // Declaration of Variable
    int operator;
    int var_stop = 1; // Variable to stop the input while it is true
    double value_1 = 0;
    double value_2 = 0;
    double result = 0;

    // Output of Title of the Program
    printf("Taschenrechner\n");
    printf("--------------\n\n");
    
    // while loop to Select Operator
    while (var_stop == 1)
    {
        // Printing Operator Selecting Menue
        printf("Please select the operator you want to use: \n");
        printf("Choose [1] for +\n");
        printf("Choose [2] for -\n");
        printf("Choose [3] for *\n");
        printf("Choose [4] for /\n");
        printf("--------------------\n... ");
        scanf("%d", &operator);
        // Checking if the Operator equals 1, 2, 3 or 4
        if (operator == 1 || operator == 2 || operator == 3 || operator == 4)
        {
            var_stop = 0; // Changing var_stop to 0 to stop the while loop
        }
        else
        {
            printf("Your Enter is Invalid. Try again\n\n");
            var_stop = 1; // Resetting var_stop to 1 to continue the while loop
        }
    }

    printf("--------------------\n");

    // Enter Value 10
    value_1 = enter_value(1);

    // Enter Value 2
    value_2 = enter_value(2);

    printf("--------------------\n");

    // Switch to execute the correct operation according to the operator input
    switch (operator)
    {
        // Case 1 is Plus
        case 1:
            result = value_1 + value_2;
            printf("%.2lf + %.2lf equals %.2lf\n", value_1, value_2, result);
            break;
        // Case 2 is Minus
        case 2:
            result = value_1 - value_2;
            printf("%.2lf - %.2lf equals %.2lf\n", value_1, value_2, result);
            break;
        // Case 3 is Multiple
        case 3:
            result = value_1 * value_2;
            printf("%.2lf * %.2lf equals %.2lf\n", value_1, value_2, result);
            break;
        // Case 4 is Divide
        case 4:
            result = value_1 / value_2;
            printf("%.2lf / %.2lf equals %.2lf\n", value_1, value_2, result);
            break;
        // default case (should not happen)
        default:
            printf("No Option\n");
    }

    // Return Value 0 for Main Function
    return 0;
}