#include <stdio.h>
#include "cs50.h" 

int main(void) 
{
    int start = 0;
    int end = 0;
    int year = 0;
    
    while(true){

        if(start < 9){
            start = get_int("Start size: ");     
        } 
        if(end < start && start >= 9){
            end = get_int("End size: ");
        } 
        if(start >= 9 && end >= start){
            break;
        }
    }

    while(end > start){

        start = start + start / 3 - start / 4;
        year++;
    }

    printf("Years: %d", year);

    return 0;
}
