#include <iostream>
using namespace std;
int(*fun)(int , int); // declaration of function pointer.....int(*fun[3])(int, int); array functions pointer
int sum(int, int);
int sub(int, int);

int main(){
    int n1 = 10, n2 = 5;
    fun = sum;
    cout << "\n Sum = " << sum(n1,n2);
    fun = &sum;                      // With ampersant '&'
    cout << "\n Sum = " << fun(n1,n2);
    fun = sub;                       // Without ampersant
    cout << "\n Sub = " << fun(n1,n2);
}

int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}
