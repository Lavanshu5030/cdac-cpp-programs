// check the given number by the user is prime or not

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter and check the number is prime or not:\n";

    cin >> num;
    int flag = 0;
    for (int i = 2; i < num; i++){
        if (num % i == 0){
            flag = flag +1;
        }
    }
    if (flag == 0){
        cout << "Is is a prime number";
    }
    else{
        cout << "Not Prime";
    }
}
