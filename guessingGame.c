#include <stdio.h>
#include <stdlib.h>

int main(){
    int secretNumber = 9;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    int outOfGuesses = 0;
    while(guess != secretNumber && outOfGuesses == 0 ){
        if(guessCount < guessLimit){
            printf("Enter a number: ");
            scanf("%d", &guess);
                if(guess > secretNumber){
                    printf("%d is too high\n", guess);
                    guessCount++;
                }
             else if (guess < secretNumber) {
                printf("%d is too low\n", guess); 
                guessCount++;
                }
            }
        else{
            outOfGuesses = 1;
        }
    }

    if(outOfGuesses == 1){
        printf("You lose!");
    }
    else{
        printf("Congrats! You win!");
    }
    
    return 0;
}