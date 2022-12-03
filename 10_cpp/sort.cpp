#include "sort.h"
#include <iostream>

void sort (char word[], int size)
{
    int numbers[13];

    for(int i = 0; i < size; i++)
    {
        switch(word[i])
        {
        case 'a': {
            numbers[i] = 1;
            break;
        }
        case 'b': {
            numbers[i] = 2;
            break;
        }
        case 'c': {
            numbers[i] = 3;
            break;
        }
        case 'd': {
            numbers[i] = 4;
            break;
        }
        case 'e': {
            numbers[i] = 5;
            break;
        }
        case 'f': {
            numbers[i] = 6;
            break;
        }
        case 'g': {
            numbers[i] = 7;
            break;
        }
        case 'h': {
            numbers[i] = 8;
            break;
        }
        case 'i': {
            numbers[i] = 9;
            break;
        }
        case 'j': {
            numbers[i] = 10;
            break;
        }
        case 'k': {
            numbers[i] = 11;
            break;
        }
        case 'l': {
            numbers[i] = 12;
            break;
        }
        case 'm': {
            numbers[i] = 13;
            break;
        }
        case 'n': {
            numbers[i] = 14;
            break;
        }
        case 'o': {
            numbers[i] = 15;
            break;
        }
        case 'p': {
            numbers[i] = 16;
            break;
        }
        case 'q': {
            numbers[i] = 17;
            break;
        }
        case 'r': {
            numbers[i] = 18;
            break;
        }
        case 's': {
            numbers[i] = 19;
            break;
        }
        case 't': {
            numbers[i] = 20;
            break;
        }
        case 'u': {
            numbers[i] = 21;
            break;
        }
        case 'v': {
            numbers[i] = 22;
            break;
        }
        case 'w': {
            numbers[i] = 23;
            break;
        }
        case 'x': {
            numbers[i] = 24;
            break;
        }
        case 'y': {
            numbers[i] = 25;
            break;
        }
        case 'z': {
            numbers[i] = 26;
            break;
        }
        }
    }

        for(int i=0; i<(size-1); i++)
            {
                for(int j=0; j<(size-i-1); j++)
                {
                    if(numbers[j]>numbers[j+1])
                    {
                        int temp = numbers[j];
                        numbers[j] = numbers[j+1];
                        numbers[j+1] = temp;
                    }
                }
            }
        std::cout << "Alphabetisch= ";
        for(int i = 0; i < size; i++)
        {
            switch(numbers[i])
            {
            case 1: {
                std::cout << 'a';
                break;
            }
            case 2: {
                std::cout << 'b';
                break;
            }
            case 3: {
                std::cout << 'c';
                break;
            }
            case 4: {
                std::cout << 'd';
                break;
            }
            case 5: {
                std::cout << 'e';
                break;
            }
            case 6: {
                std::cout << 'f';
                break;
            }
            case 7: {
                std::cout << 'g';
                break;
            }
            case 8: {
                std::cout << 'h';
                break;
            }
            case 9: {
                std::cout << 'i';
                break;
            }
            case 10: {
                std::cout << 'j';
                break;
            }
            case 11: {
                std::cout << 'k';
                break;
            }
            case 12: {
                std::cout << 'l';
                break;
            }
            case 13: {
                std::cout << 'm';
                break;
            }
            case 14: {
                std::cout << 'n';
                break;
            }
            case 15: {
                std::cout << 'o';
                break;
            }
            case 16: {
                std::cout << 'p';
                break;
            }
            case 17: {
                std::cout << 'q';
                break;
            }
            case 18: {
                std::cout << 'r';
                break;
            }
            case 19: {
                std::cout << 's';
                break;
            }
            case 20: {
                std::cout << 't';
                break;
            }
            case 21: {
                std::cout << 'u';
                break;
            }
            case 22: {
                std::cout << 'v';
                break;
            }
            case 23: {
                std::cout << 'w';
                break;
            }
            case 24: {
                std::cout << 'x';
                break;
            }
            case 25: {
                std::cout << 'y';
                break;
            }
            case 26: {
                std::cout << 'z';
                break;
            }
        }          
    }
        std:: cout << std::endl;
}
