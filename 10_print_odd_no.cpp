#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter a no.:" ;
    cin>> n;
    int i = 1;
    for(i;i<=n;i++){
       if(i%2==0){
           continue;
       }
    cout<<i<<endl;   
    }
  
}
 