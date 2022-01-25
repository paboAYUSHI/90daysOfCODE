#include <iostream>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	int i=0;
	
	int last_digit;
	//last_digit=n%10;
	int remainder;
	for(int j=0;j<T;j++){
	    int n;
	cin>>n;
	last_digit=n%10;
	while(n>0){
	    remainder=n%10;
	    n=n/10;
	}
		int sum;
	sum=remainder+last_digit;
	std::cout << sum << std::endl;
	}
	
	return 0;
}
