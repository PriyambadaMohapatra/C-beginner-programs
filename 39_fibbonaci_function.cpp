#include<iostream>
using namespace std;
int fibbonaci(int n){
    int n1=0;
    int n2=1;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<n;i++){
        int n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }
}
int main(){
    int n;
    cin>>n;
    fibbonaci(n);
}