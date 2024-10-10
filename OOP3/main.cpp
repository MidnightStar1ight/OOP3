#include <Windows.h>
//#include "application.h"
#include <iostream>
#include <string>






using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    Polynom p;
    p.show();
    return 0;
}
