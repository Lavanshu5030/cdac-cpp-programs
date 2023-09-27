#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "\n Enter number:";
    cin >> n;

    if (n % 2 == 0){
        cout << "Even number";
    }
    else{
        cout << "Odd Number" ;
    }
    return 0;
}
