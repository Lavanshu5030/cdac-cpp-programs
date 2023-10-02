/* @@@@
   @@@@
   @@@@
   @@@@ */

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter number:";
    cin >> num;

    for (int i = 0; i<num; i++){
        for (int j = 0; j < num; j++){
            cout << "@";
        }
        cout << endl;
    }
    return 0;
}
