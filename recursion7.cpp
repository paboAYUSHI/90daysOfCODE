//sum of the digits
#include<iostream>
using namespace std;
int function (int number){
    //int sum=0;
    if(number==0)
      return 0;
    else 
      return (number%10)+function(number/10);
}
int main(){
    int number;
    cout<<"enter a number";
    cin>>number;
   int z= function(number);
   cout<<z;
}
