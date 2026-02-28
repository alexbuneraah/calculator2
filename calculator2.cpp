#include<iostream>
#include <cmath>
using namespace std;
int main() {
    double num1, num2;
    char op;
    char choice;
    do {
    cout << "===============================\n";
    cout << "     SIMPLE CALCULATOR\n";
    cout << "===============================\n";
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter operator (+,-,^.*,/,s for sqrt):";
    cin>>op;
    if (op=='s') {
        if (num1 >= 0)
            cout << "Result = " << sqrt(num1);
        else
            cout << "Error!";
    }
    else {
        cout<<"Enter second number:";
        cin>>num2;
        if (op == '+') {
            cout<<"Result = "<<num1+num2;
        }
        else if (op == '-') {
            cout<<"Result = "<<num1-num2;
        }
        else if (op == '*') {
            cout<<"Result = "<<num1*num2;
        }
        else if (op == '/') {
            if (num2 != 0)
                cout<<"Result = "<<num1/num2;
            else
                cout<<"Error! Division by 0";
        }
        else if (op == '^') {
            cout<<"Result = "<<pow(num1,num2);
        }
        else {
            cout<<"Invalid operator";
        }
    }
    cout << "\nDo you want to calculate again? (y/n): ";
    cin >> choice;

} while(choice == 'y' || choice == 'n');

cout << "Thank you for using the calculator!\n";

    return 0;
}