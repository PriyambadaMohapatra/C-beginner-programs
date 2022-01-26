#include<iostream>
using namespace std;
int main(){
    int side1 , side2 , side3;
    cout<<" enter the three sides of triangle :";
    cin>>side1;
    cin>>side2;
    cin>>side3;
    if (side1==side2 && side2==side3){
        cout<<"its an equilateral triangle.";
    }
    else if (side1==side2 || side2==side3 || side3==side1)
    {
        cout<<"its an isosceles triangle.";
    }
    else{
        cout<<"its a scalene triangle";
    }
    return 0;

}