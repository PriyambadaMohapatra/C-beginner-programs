#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reversed =0;
    int lastdigit;
    int number=n;
    while (n>0)
    {
        lastdigit = n%10;
        reversed=reversed*10+lastdigit;
        n=n/10;
    }
    cout<<"reversed digit is "<<reversed<<endl;
    if (number==reversed){
        cout<<"is palindrome";
    }
    else{
        cout<<"not a palindrome";
    }

}
    