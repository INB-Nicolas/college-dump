// C++ Program that creates a calculator that can perform addition, subtraction, multiplication, division, modulus division, and power operations.
// Utilizes the 4 fundamentals of programming. Namely user input, user output, conditionals, and loops.
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <cctype>
#define splitter() cout << setfill('*') << setw(58) << "*" << endl;

using namespace std;

int main()
{
    int num1, num2, result; 
    int choice;
    char continueChoice;
    string operation;  
    
    do
    {
    splitter ();
    cout <<"\t\t\tWelcome!" << endl;
    splitter ();

    cout <<"What do you want to do?" << endl;
    cout <<"[1] Add" << endl;
    cout <<"[2] Subtract" << endl;
    cout <<"[3] Multiply" << endl;
    cout <<"[4] Divide" << endl;
    cout <<"[5] Modulus Division" << endl;
    cout <<"[6] Power" << endl;
    cout <<"[7] Exit" << endl;
    splitter ();

    cin >> choice;
    splitter ();

    if (choice == 7)
        {
            cout << "\t\t\tThank You!" << endl;
            splitter ();
            break;
        }
    else if (choice > 7 || choice < 1)
        {
            cout << "Invalid input, kindly input a number from 1-6." << endl;
            splitter ();
            continue;
        }
    
    cout <<"Enter the first number: ";
    cin >> num1;

    cout <<"Enter the second number: ";
    cin >> num2;

    if ((choice == 4 || choice == 5) && (num1 == 0 || num2 == 0))
    {
        cout << "Invalid input, cannot divide by 0." << endl;
        splitter ();
        continue;
    }

    switch (choice)
    {
        case 1:
            operation = "sum";
            result = num1 + num2;
            break;
        case 2:
            operation = "difference";
            result = num1 - num2;    
            break;
        case 3:
            operation = "product";
            result = num1 * num2;
            break;
        case 4:
            operation = "quotient";
            result = num1 / num2;
            break;
        case 5:
            operation = "remainder";
            result = num1 % num2;
            break;
        case 6:
            operation = "power";
            result = pow(num1,num2);
            break;
        default:
            cout << "Invalid input, kindly input a number from 1-6." << endl;
            splitter ();
            continue;
    }

    splitter ();
    cout <<"The " << operation << " is " << result << "." << endl;
    splitter ();

      do
        {
            cout << "Do you want to continue?\n(Press 'Y' for Yes or 'N' for No.)" << endl;
            cin >> continueChoice;
            continueChoice = toupper(continueChoice); 

            if (continueChoice != 'Y' && continueChoice != 'N')
            {
                cout << "Invalid choice. Please enter 'Y' or 'N'." << endl;
            }

        } while (continueChoice != 'Y' && continueChoice != 'N');

        system("cls");
    } while (continueChoice == 'Y');
  
  return 0;
}
