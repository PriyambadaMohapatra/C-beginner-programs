#include <iostream>
using namespace std ;
int  main() {
    int a;
    cout<<"enter a number :";
    cin>>a;
    if(a%2 == 0){
        cout<< a << " is even no.";
    }
    else{
        cout<< a << " is odd no.";
    }
    return 0;
}