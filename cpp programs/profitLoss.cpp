//Take selling price and cost price of a product from user.
//and print profit or loss amount.

#include <iostream>
using namespace std;

int main(){
    int sp,cp;
    cout << "Enter selling price:" ;
    cin >> sp;
    cout << "Enter Cost Price:";
    cin >> cp;
    int profit, loss;
    if (cp > sp){
        loss = cp - sp;
        cout << "Loss = " << loss;
    }
    else{
        profit = sp -cp;
        cout << "Profit = " << profit;
    }
    return 0;

}
