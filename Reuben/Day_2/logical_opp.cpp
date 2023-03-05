#include<iostream>
using namespace std;
int main(){
    int a = 2;
    int b = 3;

    bool b1 = (a>b);
    bool b2 = (a>=b);
    bool b3 = (a<b);
    bool b4 = (a<=b);
    bool b5 = (a==b);
    bool b6 = (a!=b);
    cout<<b1<<" "<<b2<<" "<<b3<<" "<<b4<<" "<<b5<<" "<<b6<<endl;
    
    if(b3==true && b4==true ){
        cout<<"yep"<<endl;
    }
    if(b3==true || b4==true ){
        cout<<"yepyep"<<endl;
    }
    if(!b1==true || !b2==true ){ // not 
        cout<<"yepyepyep"<<endl;
    }
}