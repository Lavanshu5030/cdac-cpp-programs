#include <iostream>
using namespace std;

int sum(int , int);
float sum(float, float);
float sum(int, float);
int sum(int , int , int);
float sum(int , float, float);
float sum(float, int);

//float sum(int , int);  return type of the function can be same but parameter type with same number of parameter can not be same

int main(){

    cout << "\n int sum(int, int) = " << sum(10,12);
    cout << "\n float sum(float, float) = " << sum(10.1f, 12.0f);
    cout << "\n float sum(int, float) = " << sum(10,12.75f);
    cout << "\n int sum(int, int, int) = " << sum(10,12,15);
    cout << "\n float sum(int, float, float) = " << sum(10,12.9f, 15.0f);
    cout << "\n float sum(float, int) = " << sum(10.06f,12);

}

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a + b;
}
float sum(int a, float b){
    return (float)a + b;
}
int sum( int a , int b, int c){
    return a + b + c;
}

float sum(int a, float b, float c){
    return (float)a + b + c;
}

float sum(float a, int b){
    return (float)(a + b);
}
