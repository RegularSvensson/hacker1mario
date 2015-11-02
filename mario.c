// include libraries
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // declare height
    int height;
    
    // run prompt until correct input recieved
    do
    {
        // prompt user for height
        printf("Height: ");
        
        // store input as height
        height = GetInt();
    } while (height < 0 || height > 23);
    
    // print pyramid
    for (int row = 1; row <= height; row++)
    {
        // print left spaces
        for (int spaces = 1; spaces <= height - row; spaces++)
        {
            printf(" ");
        }
        
        // print left hashes
        for (int hashes = 1; hashes <= row; hashes++)
        {
            printf("#");
        }
        
        // print middle spaces
        printf("  ");
        
        // print right hashes
        for (int hashes = 1; hashes <= row; hashes++)
        {
            printf("#");
        }
        
        // print new line
        printf("\n");
    }
}
