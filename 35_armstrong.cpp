#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,lastdigit;
    cin>>n;
    int number = n;
    int sum = 0;
    while (n>0)
    {
        lastdigit = n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }
    cout<<sum<<endl;
    if (number==sum){
        cout<<"its a armstrong number.";
    }
    else{
        cout<<"not a armstrong number.";
    }
    
    
}