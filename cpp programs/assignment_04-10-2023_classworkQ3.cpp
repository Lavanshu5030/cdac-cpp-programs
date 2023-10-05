/*
Use Function pointer to put address of function, based on choice call function using function pointer
*/

#include <iostream>
using namespace std;

int (*fun)(int, int);
void calculate(int n1, int n2, int choice);
int sum(int, int);
int sub(int, int);
int mul(int, int);

int main(){
    int n1, n2, choice;
    cout << "Enter n2 and n2:\n";
    cin >> n1 >> n2;
    cout << "Enter choice:\n";
    cin >> choice ;
    calculate(n1, n2, choice);
}

void calculate(int n1, int n2, int choice){
    switch(choice){
    case 1:
        fun = sum;
        break;
    case 2:
        fun = sub;
        break;
    case 3:
        fun = mul;
        break;
    default:
        break;

    }
    cout << "Result =" << fun(n1,n2);
}

int sum (int n1, int n2){
    return n1 + n2;
}
int sub(int n1, int n2){
    return n1 - n2;
}
int mul(int n1, int n2){
    return n1 - n2;
}
