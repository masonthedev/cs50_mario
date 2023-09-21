#include <cs50.h>
#include <stdio.h>

// Functions:
// 1. A main function to control the flow of the program.
// 2. A function to prompt the user for the height of the pyramid.
// This function should handle input validation, ensuring the user enters a positive integer between 1 and 8.
// 3. A function to draw the pyramid based on the height provided by the user.

int get_size(void);
void print_pyramid(int n);

// Function 1:
int main(void)
{
    // Get height of pyramid
    int height = get_size();
    print_pyramid(height);
}

// Function 2:
int get_size(void)
{
    // continue to prompt user for size between 1-8
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    return height;
}

// Function 3:
void print_pyramid(int height)
{
    // Print Pyramid
    for (int i = 0; i < height; i++)
    {
        // First loop prints the leading spaces.
        for (int leading_spaces = 0; leading_spaces < height - i - 1; leading_spaces++)
        {
            printf(" ");
        }

        // Second loop prints the hashes for the left side of the pyramid.
        for (int left_blocks = 0; left_blocks < i + 1; left_blocks++)
        {
            printf("#");
        }
        // Prints the space between the sides of the pyramid.
        printf("  ");

        // Third loop prints the hashes for the right side of the pyramid.
        for (int right_blocks = 0; right_blocks < i + 1; right_blocks++)
        {
            printf("#");
        }
        printf("\n");
    }
}