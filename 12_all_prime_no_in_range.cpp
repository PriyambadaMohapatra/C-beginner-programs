#include<iostream>
using namespace std;
int  main(){
    int n1,n2;
    cout<<"enter the range of number :";
    cin>>n1>>n2;
    int n;
    int i;
    for (n=n1;n<=n2;n++){
        for (i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }
        if (i==n){
        cout<<n<<"is prime"<<endl;
    }
    }
    
}