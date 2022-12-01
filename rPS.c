#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char computerChoose();
void whoWins(char playerChoice, char compChoice);

int main()
{
    int continueCheck = 0;
    char input[6];
    char tempInput;
    char compChoice;
    int result;
    while (continueCheck == 0) /* Keeps playing until you want to quit/get bored */
    {
        printf("Enter Rock Paper Scissors or type \"exit\" to exit: ");
        scanf("%s", input); /* Grabs the user's input (Please don't input escape or I will cry) */
        if (strcasecmp(input, "rock") == 0)
        {
            tempInput = 'r';
            char compChoice = computerChoose();
            whoWins(tempInput, compChoice);
        }
        else if (strcasecmp(input, "paper") == 0)
        {
            tempInput = 'p';
            char compChoice = computerChoose();
            whoWins(tempInput, compChoice);
        }
        else if (strcasecmp(input, "scissors") == 0)
        {
            tempInput = 's';
            char compChoice = computerChoose();
            whoWins(tempInput, compChoice);
        }
        else if (strcasecmp(input, "exit") == 0) /* A little exit clause */
        {
            continueCheck = 1;
        }
        else
        {
            printf("Invalid Input! \n");
        }
    }

    return 0;
}

char computerChoose() /* This function is determines the computer's turn */
{
    int randomComputer = (rand() % 3);
    if (randomComputer == 0)
    {
        return 'r';
    }
    else if (randomComputer == 1)
    {
        return 'p';
    }
    else if (randomComputer == 2)
    {
        return 's';
    }
}

void whoWins(char playerChoice, char compChoice) /* The head to head, the fight of the century goes here  */
{

    switch (playerChoice)
    {
    case 'r':
        if (compChoice == 's')
        {
            printf("You win! \n");
            break;
        }
        if (compChoice == 'p')
        {
            printf("You lose! \n");
            break;
        }
        if (compChoice == 'r')
        {
            printf("Tie! \n");
            break;
        }
    case 's':
        if (compChoice == 'p')
        {
            printf("You win! \n");
            break;
        }
        if (compChoice == 'r')
        {
            printf("You lose! \n");
            break;
        }
        if (compChoice == 's')
        {
            printf("Tie! \n");
            break;
        }
    case 'p':
        if (compChoice == 'r')
        {
            printf("You win! \n");
            break;
        }
        if (compChoice == 's')
        {
            printf("You lose! \n");
            break;
        }
        if (compChoice == 'p')
        {
            printf("Tie! \n");
            break;
        }
    default:
        printf("Error \n");
        break;
    }
}