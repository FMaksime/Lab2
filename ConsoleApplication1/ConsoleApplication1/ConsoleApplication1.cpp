// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "UKRAINIAN");

    int a, b, c;
     
    int plus, minus, mult, division;

    double average;

    cout << "Введiть 3 числа" << endl;

    cin >> a >> b >> c;

    plus = a + b + c;
    cout << "Сумма додавання трьох чисел =" << plus << endl;

    minus = a - b - c;
    cout << "Сумма вiднiмання трьох чисел =" << minus << endl;

    mult = a * b * c;
    cout << "Сумма множення чотирьох чисел =" << mult << endl;

    division = a / b / c;
    cout << "Сумма дiлення трьох чисел =" << division << endl;

    average = (double)(a + b + c) / 3;
    cout << "Середнє арефмитичне трьох чисел =" << average << endl;

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
