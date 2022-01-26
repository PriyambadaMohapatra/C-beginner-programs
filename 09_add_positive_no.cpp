#include<iostream>
using namespace std;
int  main(){
    int n ;
    cout<<"enter a number:";
    cin>>n;
    int sum=0;
    while (n>=0)
    {
        sum=sum+n;
        cout<<"enter a number:";
        cin>>n;   
    }
    cout<<"sum of number is :"<<sum;
    return 0;  
}