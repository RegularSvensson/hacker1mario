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
    
    // print height
    printf("You chose height: %i\n", height);
}
