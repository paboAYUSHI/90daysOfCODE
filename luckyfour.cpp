#include <iostream>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	for(int i=0;i<T;i++){
	    int count=0;
	    int t;
	    cin>>t;
	    while(t>0){
	        int r;
	        r=t%10;
	        if(r==4){
	            count=count+1;
	        }
	        t=t/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
