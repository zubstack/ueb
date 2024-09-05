#include <stdio.h>
#include <cs50.h>


int main (){
    char c = get_char("Do you agree?: ");
    if(c == 'Y'||c=='y'){
        printf("Agred! \n");
    } else if(c == 'N'||c=='n'){
        printf("Not agreed! \n");
    } else{
        printf("Unknowkn! \n");
    }

    return 0;
}
