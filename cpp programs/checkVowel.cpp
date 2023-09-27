#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter Character:";

    cin >> ch;

   if ((ch == 65) || (ch == 97) || (ch == 69) || (ch == 101) || (ch == 73) || (ch == 105) || (ch == 79) || (ch == 111) || (ch == 85) || (ch == 117) ){
    cout << "Vowel";
   }
    else{
        cout << "Not vowel";
    }
    return 0;
}
