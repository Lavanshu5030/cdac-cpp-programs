// Print the given number in reverse order

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number...that to be reverse:\n";
    cin >> num;

    int rev = 0;
    while(num != 0){
        int last = num % 10;
        rev = rev * 10 + last;
        num = num / 10;
    }
    cout << rev;
    return 0;

}
