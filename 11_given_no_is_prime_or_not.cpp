#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number :";
    cin>>n;
    int i =2;
    for (i;i<n;i++){
        if(n%i==0){
            cout<<"is not prime";
            break;
        }
    }    
    if(i==n) {
    cout<<i<<"is prime";
    }
    
    
}