

#include <iostream>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a, b, c,k = 0;
    for (int i = 100;i <= 999;i++) {
        a = i % 10;
        c = i / 100;
        b = i / 10 % 10;
        if (a == b || a == c || b == c) {
            k++;
        }

    }
    cout << "Кiлькiсть чисел з однаковими цифрами: " << k;
}
