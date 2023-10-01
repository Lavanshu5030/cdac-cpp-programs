// Sum of digits of the given number

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number to get sum of digits:\n";
    cin >> num;
    int sum = 0;
    while(num != 0){
        int last = num % 10;
        sum = sum + last;
        num = num/10;
    }
    cout << sum;
    return 0;
}
