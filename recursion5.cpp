//product of two numbers using recursion
//Methods:
//1) If x is less than y, swap the two variables value 
//2) Recursively find y times the sum of x 
//3) If any of them become zero, return 0

#include<iostream>
using namespace std;
int fun(int x , int y){
    if(y==0)
      return 0;
    else
      return x+fun(x,(y-1));
};

int main(){
   int x= fun(100,5);
   cout<<x;
}
