/*
@@@@@
@@@@
@@@
@@
@
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number to print patter:\n";
    cin >> n;

    for (int i = 0; i<n; i++){
        for (int j = 0; j<n-i; j++){
            cout << "@";
        }
        cout << endl;
    }
}
