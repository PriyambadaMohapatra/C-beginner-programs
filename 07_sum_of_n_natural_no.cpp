#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a no. :";
    cin>>n;
    int sum=0;
    int i=1;
    for (i;i<=n;i++){
        sum = sum+i;
    }
    cout<<"sum of no. is"<<sum;
}