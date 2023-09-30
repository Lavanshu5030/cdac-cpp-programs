// Take a number and print it's factors

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter any number to see it's factor:\n";
    cin >> num;

    for (int i = 1; i <= num/2; i++){
        if (num % i == 0){
            cout << i << " ";
        }
    }
}
