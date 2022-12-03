#include <iostream>

using namespace std;

void fun(int* ptr){
    if(ptr != nullptr)  // Das Programm hat sich aufgehängt, da es den Nullpointer nicht ausgeben konnte
        cout << *ptr << endl; // Durch das if kommt es nie zu diesem Fall!
}

int main()
{
    int a = 42;
    int* b = nullptr;

    fun(&a);
    fun(b);

    cout << "Hello World" << endl;

    return 0;
}

