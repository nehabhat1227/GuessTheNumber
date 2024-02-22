#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number, guess, nguesses=1;
    srand(time(0));   //returns time in second...generates a new number everytime
    number=rand()%100+1;  //generates random number between 1 and 100
    //loop unitl the number is guessed
    do
    {
        printf("Guess the number between 1 and 100:");
        scanf("%d",&guess);
        if(guess>number)
        {
            printf("Lower number please!!\n");
        }
        else if (guess<number)
        {
            printf("Higher number please!!\n");
        }
        else if (guess==number)
        {
            printf("Congrats!!! You have guessed the correct number in %d guesses!\n",nguesses);
        }
        nguesses++;
    } while (guess!=number);
    
    return 0;
}
