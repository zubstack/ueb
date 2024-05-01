#include <stdio.h>
#include <cs50.h>

// Print numbers from 0 to 10

int main(){
    int i = 0;
        printf("Number: ");
    while(i <= 10){
        printf("%d\t", i);
        if(i == 10){
            printf("\n");
        }
        i++;
    }
    return 0;
}
