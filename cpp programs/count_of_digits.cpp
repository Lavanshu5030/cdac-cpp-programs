// Count the number of digit in the given number

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number to count number of digits in it:\n";
    cin >> num;
    if(num == 0){
        cout << 1;
    }
    else{
    int cnt = 0;
    while(num != 0){
        cnt++;
        num = num/10;
    }
    cout << cnt;
    }
    return 0;
}
