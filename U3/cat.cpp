/*
Author: Alan Alejandro Hernandez Macias
Date: 03/11/2022
Description:
Last Modification:
*/

#include <iostream>
#include <time.h>

using namespace std;
void game(char board[3][3]);
void enterMove(char board[3][3]);
void boardBody(char board[3][3]);
void entryMove(char board[3][3]);
void cpu(char board[3][3]);
int winner (char board[3][3]);

void game(char board[3][3])
{
    int counter1=0, counter2;

    enterMove(board);

    do
    {
        system ("clear");
        boardBody(board);

        if (counter1 % 2 == 0)
        {
            entryMove(board);
        }
        else
        {
            cpu(board);
        }

        counter2 = winner(board);
        
        counter1++;
        
    } while (counter1 <= 9 && counter2 == 3);

    system ("clear");
    boardBody(board);

    if (counter2 < 2)
    {
        cout << endl << "\033[0;31m" << "Win" << "\033[0m"<< endl << endl; 
    }
    else if (counter2 > 1)
    {
        cout << endl << "\033[0;31m" << "Lose" << "\033[0m"<< endl << endl; 
    }
    else
    {
        cout << endl << "\033[0;31m" << "None winner" << "\033[0m"<< endl << endl; 
    }
    
    
    
}

void enterMove(char board[3][3])
{
    int counter1, counter2;
    char entry;

    entry = '1';

    for (int counter1 = 0; counter1 < 3; counter1++)
    {
        for (int counter2 = 0; counter2 < 3; counter2++)
        {
            board[counter1][counter2] = entry++;
        }
    }
}

void entryMove(char board[3][3])
{
    int counter1, counter2, counter3;
    char enter;

    do
    {
        do
        {
            cout << endl << "Enter a movement: ";
            cin >> board[3][3];
            enter = board[3][3];
        } while (enter < '1' || enter > '9');

        counter3 = 0;

        switch (enter)
        {
        case '1':
        {
            counter1 = 0;
            counter2 = 0;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '2':
        {
            counter1 = 0;
            counter2 = 1;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '3':
        {
            counter1 = 0;
            counter2 = 2;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '4':
        {
            counter1 = 1;
            counter2 = 0;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '5':
        {
            counter1 = 1;
            counter2 = 1;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '6':
        {
            counter1 = 1;
            counter2 = 2;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '7':
        {
            counter1 = 2;
            counter2 = 0;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '8':
        {
            counter1 = 2;
            counter2 = 1;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        case '9':
        {
            counter1 = 2;
            counter2 = 2;
            if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
            {
                counter3 = 1;
                cout << "Invalid movement!";
            }
            break;
        }
        }
    } while (counter3 == 1);

    board[counter1][counter2] = 'X';
}

void cpu(char board[3][3]){
    int counter1, counter2, number;
    srand (time(NULL));

    do
    {
        counter1 = rand() % 3;
        counter2 = rand() % 3;
        number = 0;
        if (board[counter1][counter2] == 'X' || board[counter1][counter2] == 'O')
        {
            number = 1;
        }
        
    } while (number == 1);

    board[counter1][counter2] = 'O';
}

void boardBody(char board[3][3])
{
    int counter1, counter2;

    cout << endl << " ((Cat game))" << endl << endl;

    for (int counter1 = 0; counter1 < 3; counter1++)
    {
        cout << "        |     |     " << endl;
        for (int counter2 = 0; counter2 < 3; counter2++)
        {
            if (counter2 == 0)
            {
                cout << "     " << board[counter1][counter2] << "  |";
            }

            else if (counter2 == 1)
            {
                cout << "  " << board[counter1][counter2] << "  |";
            }
            else
            {
                cout << "  " << board[counter1][counter2] << "  ";
            }
        }

        if (counter1 < 2)
        {
            cout << endl
                 << "   _____|_____|_____" << endl;
        }
        else
        {
            cout << endl
                 << "        |     |     "<< endl;
        }
    }
}

int winner (char board[3][3]){
    if (board[0][0] == 'X' || board[0][0] == 'O')
    {
        if (board[0][0] == board[0][1] && board[0][0] == board[0][2])
        {
            if (board[0][0] == 'X')
            {
                return 1;
            }
            else if (board[0][0] == 'O')
            {
                return 2;
            }
            
        }
        else if (board[0][0] == board[1][0] && board[0][0] == board[2][0])
        {
            if (board[0][0] == 'X')
            {
                return 1;
            }
            else if (board[0][0] == 'O')
            {
                return 2;
            }
        }

    }
    else if (board[1][1] == 'X' || board[1][1] == 'O')
    {
        if (board[1][1] == board[0][1] && board[1][1] == board[2][2])
        {
            if (board[1][1] == 'X')
            {
                return 1;
            }
            else if (board[1][1] == 'O')
            {
                return 2;
            }
            
        }
        else if (board[1][1] == board[0][1] && board[1][1] == board[2][1])
        {
            if (board[1][1] == 'X')
            {
                return 1;
            }
            else if (board[1][1] == 'O')
            {
                return 2;
            }
        }
        else if (board[1][1] == board[1][0] && board[1][1] == board[1][2])
        {
            if (board[1][1] == 'X')
            {
                return 1;
            }
            else if (board[1][1] == 'O')
            {
                return 2;
            }
        }
        else if (board[1][1] == board[0][2] && board[1][1] == board[2][0])
        {
            if (board[1][1] == 'X')
            {
                return 1;
            }
            else if (board[1][1] == 'O')
            {
                return 2;
            }
        }
        
    }
    else if (board[2][2] == 'X' || board[2][2] == 'O')
    {
        if (board[2][2] == board[2][0] && board[2][2] == board[2][1])
        {
            if (board[2][2] == 'X')
            {
                return 1;
            }
            else if (board[2][2] == 'O')
            {
                return 2;
            }
            
        }
        else if (board[2][2] == board[0][2] && board[2][2] == board[1][2])
        {
            if (board[2][2] == 'X')
            {
                return 1;
            }
            else if (board[2][2] == 'O')
            {
                return 2;
            }
        }

    }

    return 3;
    
}

int main()
{
    char board[3][3];

    game(board);

    return 0;
}
