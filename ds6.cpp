#include <iostream>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	for(int i=0;i<T;i++){
	    int count=0;
	    int n;
	    cin>>n;
	    while(n>0){
	        //n=n%10;
	        count=count+n%10;
	        n=n/10;
	    }
	    std::cout << count << std::endl;
	}
	return 0;
}