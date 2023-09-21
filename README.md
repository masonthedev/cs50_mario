# cs50_mario

Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks.

In this assignment I had to recreate those pyramids in C, using hashes (#) for bricks.

The task was to allow the user to decide how tall the pyramids should be by first prompting them for a positive integer between, 1 and 8. Then, to print the pyramid based on the users input. If a users input was outside of those values the program should continue to prompt for a proper value.

My program has 3 functions.

1. The main function to control the flow of the program.
2. The second function to prompt the user for the height of the pyramid. This function handles input validation, ensuring the user enters a positive integer between 1 and 8.
3. The last function to draw the pyramid based on the height provided by the user.

Within my final function I used for loops to print the pyramid. I had 1 main loop with 3 nested loops running parralel to each other.

The 3 nested loops do the following.

1. First loop prints the leading spaces.
2. Second loop prints the hashes for the left side of the pyramid.
3. Third loop prints the hashes for the right side of the pyramid.

