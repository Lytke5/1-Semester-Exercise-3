#include <iostream>
#include "sort.h"
//#include "sort.cpp"

using namespace std;

bool Palindrome(char word[], int size)
{

    for(int i = 0; i < size/2; i++)
    {
        if(word[i] != word[size - i-1])
            return false;
    }
    return true;
}

int main()
{
    int wordLength = 0;
    char wordArray[14];
    bool isPalindrome;

    cout << "Wort: ";

    cin >> wordArray;

    for(int i = 0; i < 14; i++)
    {

        if(wordArray[i] != NULL)
            wordLength++;

        else
            break;
    }




    isPalindrome = Palindrome(wordArray, wordLength);

    if(isPalindrome)
        cout << "Es ist ein Palindrom" << endl;
    else
        cout << "Es ist kein Palindrom" << endl;

    sort(wordArray, wordLength);

    return 0;
}
