#include <iostream>
using namespace std;

int calculate(int n1, int n2, int choice);

int main(){
    int n1, n2, choice;
    cout << "Enter n1 and n2:\n";
    cin >> n1 >> n2;
    cout << "Enter choice:\n";
    cout << "1. Addition:\n";
    cout << "2. Subtration:\n";
    cout << "3. Multiplication:\n";
    cin >> choice;
    cout << "Result: " << calculate(n1, n2, choice);
}

int calculate(int n1, int n2, int choice){

    switch(choice){
    case 1:{
        int sum = n1 + n2;
        return sum;
        break;}
    case 2:{
        int sub = n1 - n2;
        return sub;
        break;}
    case 3:{
        int mul = n1 * n2;
        return mul;
        break;}
    default:
        break;

    }
}
