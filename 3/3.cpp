//Sina Khorashahi - 98440373
//3.
#include<iostream>
using std::cout;
using std::cin;

int main()
{
    int number1 = 0, number2 = 0, maximum = 0;
    cout << "First number: ";
    cin >> number1;
    cout << "Second number: ";
    cin >> number2;

    if (number1 > number2)
        maximum = number1;
    else
        maximum = number2;

    while (true)
        if (maximum % number1 == 0 && maximum % number2 == 0)
            break;
        else
            ++maximum;
    cout << "K.M.M: " << maximum;
    system("pause>n");
    return 0;
}



