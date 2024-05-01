#include <stdio.h>

int main()
{
    char name[50]; // Assuming names won't exceed 49 characters
    char basename[50];
    char age[10];     // Assuming age won't exceed 9 characters
    char credits[10]; // Assuming credits won't exceed 9 characters

    printf("Insert student's information\nName: ");
    scanf("%49[^\n]", name); // Read up to 49 characters until a newline
    getchar();               // Consume the newline character left in the input buffer

    printf("Basename: ");
    scanf("%49[^\n]", basename);
    getchar(); // Consume the newline character left in the input buffer

    printf("Age: ");
    scanf("%9s", age); // Read up to 9 characters as age

    printf("Credits: ");
    scanf("%9s", credits); // Read up to 9 characters as credits

    printf("Final student:\nNAME\tBASENAME\tAGE\tCREDITS\n%-4s\t%-4s\t%-4s\t%-4s\n", name, basename, age, credits);

    return 0;
}
