//#include <iomanip>
#include <iostream>
//here i did a very small mistake in line 11...
//i checked that the current amount(which is to be withdrawl) is less than the actual bank balance but forgot that it will deduct $0.5 also..
//so what if I have 120 rs in my bank balance and i need to withdraw rs 120 then what about deduction
//in total it will take 120.5 rs but it is greater than the actual bank balance and we needto make sure that this much money is in our bank account
using namespace std;

int main() {
	// your code goes here
		int x;
	float y;
	cin>>x>>y;
	if((x%5==0)&&(x+0.50<=y)){
	    //cout<<setprecision(2);
	    std::cout << y-x-0.50 << std::endl;
	}
	else{
	    //cout<<setprecision(2);
	    cout<<y;
	}
	return 0;
}