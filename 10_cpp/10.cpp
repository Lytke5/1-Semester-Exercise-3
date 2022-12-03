#include "sort.h"

void sort (string word)
{
    const char* wordArray = word.c_str();
    int numbers[word.size()];

    for(int i = 0; i < word.size(); i++)
    {
        switch(wordArray[i])
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
}
