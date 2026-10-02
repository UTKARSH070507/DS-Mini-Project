#include <iostream>
#include <string>
using namespace std;

int main() {
    int choice;
    do{
        // Prompt the user choose an option
        cout<<"Welcome to the Pharmacy Management System!" << endl<< endl;
        cout << "Please choose an option (1-3):" << endl;
        cout << "1. Medicine Inventory" << endl;
        cout << "2. Orders" << endl;
        cout << "3. Order History" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl<< endl;
    }
    while (choice != 4);


    cout << "Exiting..." << endl;


    return 0;
}