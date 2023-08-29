#include <cs50.h>
#include <stdio.h>

int main(int)
{
    // TODO: Prompt for start size
    int start_pop, end_pop,years=0,birth,death;

    printf("Enter the Start size of Population ");
    scanf("%d",&start_pop);

    while(start_pop<9)
    {
        printf("\n Enter the Start size of Population ");
        scanf("%d",&start_pop);
    }

    // TODO: Prompt for end size
    printf("Enter the End Population size ");
    scanf("%d",&end_pop);

    while(start_pop>end_pop)
    {
        printf("\n Re-Enter the End size of Population ");
        scanf("%d",&end_pop);
    }
    // TODO: Calculate number of years until we reach threshold
    while(!(start_pop >= end_pop)){
        birth = start_pop/3;
        death = start_pop/4;

        start_pop = start_pop + birth - death ;

        years++;

    }
    // TODO: Print number of years
    printf("\n Number of Years: %i \n",years);

    return 0;
}
