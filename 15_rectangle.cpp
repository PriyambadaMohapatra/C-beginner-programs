#include <iostream>
using namespace std;
int main(){
    int row,cols;
    cin>>row>>cols;
    for ( int i=1;i<=row;i++){
        for (int j=1;j<=cols;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}