#include <iostream>

using namespace std;//we can use names and objects in standard ouput

int main()
{

    int id, password, savedID, savedPass;//declaration of integers
    char choice, choice2;//declare my choice as character
    double balance = 0;//we declare my balance as a double

    cout << "Hi! Welcome to the ATM Machine! \n\n";//first output

    do {
        cout << "Please select an option from the menu below: \n\n";
        cout << "l -> Login \n";
        cout << "c -> Create New Account \n";
        cout << "q -> Quit\n";
        cin >> choice;

        switch (choice) {//we use switch for different blocks in code
            case 'c'://block 1
                cout << "Please enter your user id: ";
                cin >> savedID;
                cout << "Please enter your password: ";
                cin >> savedPass;
                cout << "Thank You! Your account has been created!\n";
                break;

            case 'q'://block 2
                cout << "Thanks for visiting!";
                break;

            case 'l':
                cout << "Please enter your user id: ";
                cin >> id;
                cout << "Please enter your password: ";
                cin >> password;

                if (id == savedID && password == savedPass) {//first condition
                    cout << "Access Granted! \n";

                    while (choice2 != 'q') {
                        cout << "d -> Deposit Money \n";
                        cout << "w -> Withdraw Money \n";
                        cout << "r -> Request Balance\n";
                        cout << "q -> Quit \n";
                        cin >> choice2;

                        switch (choice2) {//second switch
                            case 'd':
                                int deposit;//declaration of deposit
                                cout << "Amount of deposit: $ ";
                                cin >> deposit;//scanne your deposit
                                balance += deposit;
                                break;

                            case 'w':
                                int withdraw;
                                cout << "Amount of withdrawal: $ ";
                                cin >> withdraw;//scanning your withdraw

                                if (withdraw <= balance) {
                                    balance -= withdraw;
                                    cout << "";
                                } else {
                                    cout << "Your account is too low! \n";
                                }
                                break;

                            case 'r':
                                cout << "Your balance is: $" << balance << "\n";
                                break;

                            case 'q':
                                cout << "\n";
                                break;

                            default://we use a default to put a code that is not declared in our code 
                                cout << "Invalid choice! \n";
                                break;
                        }
                    }
                } else {
                    cout << "*** LOGIN FAILED! *** \n";
                }
                break;

            default:
                cout << "Invalid choice! \n";
                break;
        }
    } while (choice != 'q');//last while

    return 0;
}


 

