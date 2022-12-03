#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    char letter;   
    bool win;
    bool gameOver = false;
    bool rightLetter;
    bool letterIsUsed;
    int guesses = 0;  
    char field [7][7];
    vector<char> usedLetters;

    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
            field[i][j] = ' ';
    }

    cout << "Tippe ein Wort ein: ";
    cin >> word;
    transform(word.begin(), word.end(),word.begin(), toupper);

    vector<char> wordFull(word.begin(), word.end());
    vector<char> wordDisplay;

    for(int i = 0; i < word.size(); i++)
    {
        wordDisplay.push_back('_');
    }

    do{
        system("cls");
        for (int i = 0; i < word.size(); i++)
        {
            cout << wordDisplay[i];
        }
        cout << endl << endl;

        for(int i = 0; i < 7; i++)
        {
            for(int j = 0; j < 7; j++)
            {
                cout << field[i][j];
            }
            cout << endl;
        }

        cout << "Benutzte Buchstaben: ";
        for(int i = 0; i < usedLetters.size(); i++)
            cout << usedLetters[i] << ", ";
        cout << endl;

        do
        {
            letterIsUsed = false;
            cout << "Buchstabe: ";
            cin >> letter;
            letter = toupper(letter);

            for(int i = 0; i < usedLetters.size(); i++)
            {
                if(letter == usedLetters[i])
                    letterIsUsed = true;
            }

        }while(letterIsUsed);

        usedLetters.push_back(letter);

        gameOver = true;
        win = true;
        rightLetter = false;
        for(int i = 0; i < word.size(); i++)
        {
            if(wordFull[i] == letter)
            {
            wordDisplay[i] = letter;
            rightLetter = true;
            }

            if(wordDisplay[i] == '_')
            {
                gameOver = false;
                win = false;
            }
        }
        if(!rightLetter)
        {
            guesses++;
            switch (guesses)
            {
            case 1:
                {
                field[6][0] = '(';
                field[6][1] = '-';
                field[6][2] = '-';
                field[6][3] = '-';
                field[6][4] = ')';
                break;
                }
            case 2:
            {
                field[1][2] = '|';
                field[2][2] = '|';
                field[3][2] = '|';
                field[4][2] = '|';
                field[5][2] = '|';
                break;
            }
            case 3:
            {
                field[0][2] = '_';
                field[0][3] = '_';
                field[0][4] = '_';
                field[0][5] = '_';
                break;
            }
            case 4:
            {
                field[1][3] = '/';
                break;
            }
            case 5:
            {
                field[1][5] = '|';
                break;
            }
            case 6:
            {
                field[2][5] = 'O';
                break;
            }
            case 7:
            {
                field[3][5] = '|';
                break;
            }
            case 8:
            {
                field[3][4] = '(';
                field[3][6] = ')';
                break;
            }
            case 9:
            {
                field[4][4] = '(';
                field[4][6] = ')';

                gameOver = true;
                win = false;
                break;
            }
            }
        }
    }
    while(!gameOver);

    system("cls");
    for(int i = 0; i < 7; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            cout << field[i][j];
        }
        cout << endl;
    }

    if(win)
        cout << "Du hast gewonnen!" << endl;
    else
        cout << "Du hast verloren :("<< endl;


    return 0;
}
