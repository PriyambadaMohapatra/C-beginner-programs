#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a postive no.:";
    cin>>n;
    int i=1;
    int multi=0;
    for(i;i<=10;i++){
        multi = n*i;
        cout<< n << "*" << i << "="<<multi <<endl;
    }
return 0;
}