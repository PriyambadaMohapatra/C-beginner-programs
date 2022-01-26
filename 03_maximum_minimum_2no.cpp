#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter two numbers:";
    cin>> a;
    cin>> b;
    if (a>b){
        cout<<a<<" is maximum\n";
        cout<<b<< " is minimum";
    }
    else{
        cout<<b<<" is maximum\n";
        cout<<a<< "is minimum";
    }
    return 0;
}