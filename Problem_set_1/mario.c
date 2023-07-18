#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = 0;

    do
    {
       height = get_int("Height: ");
    }
    while(height > 8 || height <= 0);


    for(int i = 0; i<=height; i++){

     for(int s = 0; s<height-i; s++){
        if(i != 0){printf(" ");}

     }

     for(int n = 0; n<i; n++){
         printf("#");
     }

     if(i !=0){ printf("\n");}

     };



}