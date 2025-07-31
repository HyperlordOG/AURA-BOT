// This tells the computer we want to use input/output functions
#include <stdio.h>

// This is where our program starts
int main() {
    // Create three boxes to store whole numbers
    int first_number, second_number, result;
    
    // Ask the user to type the first number
    printf("Please enter your first number: ");
    // Read what the user typed and put it in the first box
    scanf("%d", &first_number);
    
    // Ask the user to type the second number  
    printf("Please enter your second number: ");
    // Read what the user typed and put it in the second box
    scanf("%d", &second_number);
    
    // Add the two numbers together and put the answer in the result box
    result = first_number + second_number;
    
    // Show the user what we calculated
    printf("\n"); // This creates a blank line for better readability
    printf("You entered: %d and %d\n", first_number, second_number);
    printf("The sum is: %d\n", result);
    
    // Tell the computer our program finished successfully
    return 0;
}