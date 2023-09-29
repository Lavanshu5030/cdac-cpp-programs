// print factorial of a given number

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number of the factorial you want:\n";
    cin >> num;
    int fact = 1;
    while(num > 0){
        fact = fact * num;
        num--;
    }
    cout << "factorial of the number " << "is:" << fact;

}
