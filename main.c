#include <stdio.h>
#include <stdlib.h>

/********************************
Author: Ahmed Samy Kamal
*********************************/

char place[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkTheWinner(void);
void gameBoard(void);

int main()
{
    int player = 1, i, choice;
    char mark,ans;
    do
    {
        gameBoard();
        if (player % 2){
        player = 1;
        }
        else{
        player = 2;
        }

        printf("\t\tPlayer %d, Enter a Place number:  ", player);
        scanf("%d", &choice);

         if (player == 1){
            mark = 'X';
         }
         else{
             mark = 'O';
         }

        if (choice == 1 && place[1] == '1')
            place[1] = mark;

        else if (choice == 2 && place[2] == '2')
            place[2] = mark;

        else if (choice == 3 && place[3] == '3')
            place[3] = mark;

        else if (choice == 4 && place[4] == '4')
            place[4] = mark;

        else if (choice == 5 && place[5] == '5')
            place[5] = mark;

        else if (choice == 6 && place[6] == '6')
            place[6] = mark;

        else if (choice == 7 && place[7] == '7')
            place[7] = mark;

        else if (choice == 8 && place[8] == '8')
            place[8] = mark;

        else if (choice == 9 && place[9] == '9')
            place[9] = mark;

        else
        {
            printf("\aOps! Invalid move ");

            player--;
            getch();
        }
        i = checkTheWinner();

        player++;
    }while (i ==  - 1);

    gameBoard();

    if (i == 1){
        printf("\aPlayer %d win\n", --player);
        printf("3aaaash ya wa7sh (:\n");
    }
    else{
        printf("\aOps! Game draw");
    }
    printf("\n*********************************\n");
    printf("\nGame developed by Eng\\ Ahmed Samy\n");
    printf("Goodbye ^_^\n\n");
    return 0;
}

/********************************
FUNCTION TO RETURN GAME STATUS
*********************************/

int checkTheWinner(void)
{
    if (place[1] == place[2] && place[2] == place[3])
        return 1;

    else if (place[4] == place[5] && place[5] == place[6])
        return 1;

    else if (place[7] == place[8] && place[8] == place[9])
        return 1;

    else if (place[1] == place[4] && place[4] == place[7])
        return 1;

    else if (place[2] == place[5] && place[5] == place[8])
        return 1;

    else if (place[3] == place[6] && place[6] == place[9])
        return 1;

    else if (place[1] == place[5] && place[5] == place[9])
        return 1;

    else if (place[3] == place[5] && place[5] == place[7])
        return 1;

    else if (place[1] != '1' && place[2] != '2' && place[3] != '3' &&
        place[4] != '4' && place[5] != '5' && place[6] != '6' && place[7]
        != '7' && place[8] != '8' && place[9] != '9')

        return 0;
    else
        return  - 1;
}


/****************************************
FUNCTION TO DRAW THE gameBoard OF X-O GAME
*****************************************/

void gameBoard(void)
{
    system("cls");
    printf("\t________________________________________\n\n");
    printf("\t\tWelcome to X-O Game\n");
    printf("\t________________________________________\n\n");
    printf("\t\tPlayer 1 (X)  -  Player 2 (O)\n\n\n");


    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", place[1], place[2], place[3]);

    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");

    printf("\t\t  %c  |  %c  |  %c \n", place[4], place[5], place[6]);

    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");

    printf("\t\t  %c  |  %c  |  %c \n", place[7], place[8], place[9]);

    printf("\t\t     |     |     \n\n");
}
