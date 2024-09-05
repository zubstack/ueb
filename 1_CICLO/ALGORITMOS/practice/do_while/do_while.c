#include <stdio.h>
#include <cs50.h>


int main (){

    int size;

    do{
        printf("Size: ");
        scanf("%d", &size);
    }while(size<1);

    for(int j=0; j < size;j++){
        for(int i=0; i < size;i++){
            printf("#");
        };
        printf("\n");
    }
    printf("\n");
    return 0;
}
