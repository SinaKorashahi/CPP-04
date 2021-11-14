//Sina Khorashahi - 98440373
//2.
#include<iostream>
using std::cout;
using std::cin;
bool isFactorial(unsigned int);

int main()
{
    unsigned int number;
    cout << "Number: ";
    cin >> number;
    bool answer = isFactorial(number);
    if (answer == 1)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

bool isFactorial(unsigned int number)
{
    for (unsigned int i = 1;; i++)
        if (number % i == 0)
            number /= i;
        else
            break;
    if (number == 1)
        return true;
    else
        return false;
}



