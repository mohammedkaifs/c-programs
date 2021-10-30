#include <stdio.h>

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater(char char1, char char2)
{
    //return 1 if c1>c2 and 0 otherwise.if c1==c2 it will return -1
    if (char1 == char2)
    {
        return -1;
    }
     else if ((char1 == 'r') && (char2 == 's'))
    {
        return 1;
    }
    else  if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

    else if ((char1 == 'p') && (char2 == 'r'))
    {
        return 1;
    }
    else  if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }

   else  if ((char1 == 's') && (char2 == 'p'))
    {
        return 1;
    }
    else  if ((char2 == 'r') && (char1 == 's'))
    {
        return 0;
    }
}

int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};

    printf("Welcome to the rock paper the rock,paper,scissors");
    for (int i = 0; i < 3; i++)
    {
        //take player 1's input

        printf("\n player 1's turn\n");
        printf("\n choose 1 for Rock, 2 for Paper ,3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerchar = dict[temp - 1];
        printf("you choose %c\n\n",playerchar);  
        //computer's turn

        printf("\n computers  turn\n");
        printf("\n choose 1 for Rock, 2 for Paper ,3 for Scissor\n");
        temp = generateRandomNumber(3) + 1;
        compchar = dict[temp - 1];
         printf("computer choose %c\n\n",compchar);  

        if (greater(compchar, playerchar) == 1)
        {
            compscore += 1;
            printf("cpu got it!\n\n");
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
             printf("its a draw!\n\n");
        }
        else{
            playerscore += 1;
             printf("You got it!\n\n");
        }
        printf("\n you: %d\n CPU:%d",playerscore,compscore);
    }
    if (playerscore>compscore)
    {
        printf("\n you win the game\n");
    }
    else if  (playerscore<compscore)
    {
        printf("\n cpu win the game\n");
        
    }
    else
    {
        printf("\n its a draw");
    }
    
    return 0;
}