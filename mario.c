// include libraries
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    // declare height
    int height;
    
    // prompt user for height
    printf("Height: ");
    
    // store input as height
    int height = GetInt();
    
    // print height
    printf("You chose height: %i\n", height);
}
