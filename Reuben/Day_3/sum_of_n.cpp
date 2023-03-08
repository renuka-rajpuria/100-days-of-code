#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    int i = 1;
    int sum = 0;
    while(i<=a){
        sum = sum+i;
        i = i +1;
    }
    cout << sum <<endl;

}