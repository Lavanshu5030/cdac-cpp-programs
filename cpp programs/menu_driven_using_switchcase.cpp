// Menu Driven using switch case

#include <iostream>
using namespace std;

int main(){
    int choice, qty , total_bill = 0;
    do{
        cout << "\n 1. Tea           - 10/-";
        cout << "\n 2. Coffee        - 20/-";
        cout << "\n 3. Black Tea     - 22/-";
        cout << "\n 4. Cold Coffee   - 40/-";
        cout << "\n 5. Exit";

        cout << "\nEnter you choice\n";
        cin >> choice;
        cout << "Enter quantity\n";
        cin >> qty;

        switch(choice){
        case 1:
            total_bill = qty * 10;
            cout << total_bill << "\n";
            break;
        case 2:
            total_bill = qty * 20;
            cout << total_bill << "\n";
            break;
        case 3:
            total_bill = qty * 22;
            cout << total_bill << "\n";
            break;
        case 4:
            total_bill = qty * 40;
            cout << total_bill << "\n";
            break;
        case 5:
            break;
        default:
            cout << "Invalid choice";
            }
    }while(choice != 5);
}
