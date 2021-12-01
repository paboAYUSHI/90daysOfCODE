#include<iostream>
using namespace std;

bool prime(int number , int i){
    if(number<=2){
        return (number==2) ?true:false;
    }
    else if(number%2==0)
       return false;
    else if(i*i>number)
       return true;

    return prime(number,i+1);
}
int main(){
    if(prime(15,2))
      cout<<"true";
    else
      cout<<"false";
}
