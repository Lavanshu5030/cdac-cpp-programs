/*
calculate(n1, n2, ref of sum , sub and mul using references make changes into sum, sub, mul variables
          print results into main function
*/

#include <iostream>
using namespace std;
void calculate(int , int, int &sum, int &sub, int &mul);


int main(){
    int n1, n2, sum, sub, mul;
    cout << "Enter n1 and n2:\n";
    cin >> n1 >> n2;


    calculate(n1, n2, sum, sub, mul);
}

void calculate(int n1, int n2, int &sum, int &sub, int &mul){
    sum = n1 + n2;
    sub = n1 - n2;
    mul = n1 * n2;
    cout << "Sum = " << sum << "\n";
    cout << "Sub = " << sub << "\n";
    cout << "Mul = " << mul;
}

