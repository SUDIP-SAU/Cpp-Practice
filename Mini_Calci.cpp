#include <iostream>
using namespace std;

int main()
{

    int num1, num2;
    char op;

    cout << "Enter the Expression for the calculation (eg. 2 + 3) : "
         << endl;
    cin >> num1 >> op >> num2;

    switch (op)
    {
    case '+':
        cout << "The SUM is : " << num1 + num2;
        break;
    case '-':
        cout << "The Difference is : " << num1 - num2;
        break;
    case '*':
        cout << "The Product is : " << num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "The Divison is : " << num1 / num2;
        }
        else
        {
            cout << "Error : Divison by ZERO " << endl;
        }
        break;
    case '%':
        cout << "The Remainder is : " << num1 % num2;
        break;
    default:
        cout << "Enter a valid operation\n"
             << endl;
    };
}