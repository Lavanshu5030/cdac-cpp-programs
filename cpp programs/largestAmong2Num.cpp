#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    cout << "Enter number 1:";
    cin >> num1;
    cout << "Enter number 2:";
    cin >> num2;
    if (num1 > num2){
        cout << "number 1 is Largest";
    }
    else if( num1 == num2){
        cout << "number 1 is equal to number 2";
    }
    else{
        cout << "number 2 is largest";
    }
    return 0;
}
