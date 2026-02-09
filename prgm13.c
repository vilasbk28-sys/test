#include <stdio.h>
int main()
{
    int secret=7,guess;
    printf("guess the number(1 to 10):");
    scanf("%d",&guess);
    if(guess==secret)
    printf("congratulations! you guessed correctly");
    else
    printf("wrong guess.Try again");
    return 0;
}