#include <iostream>
using namespace std;
int main(){
    int a;
    a = cin.get();
    cout << a <<endl;
    if(a<=57){
        cout << "The val is numeric"<<endl;
    }
    else if(a<=90){
        cout << "The value is upper case"<<endl; 
    }
    else if(a<=122){
        cout << "The value is lower case"<<endl;
    }
}