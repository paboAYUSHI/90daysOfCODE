#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++){
	    int N,M;
	    cin>>N>>M;
	    int count;
	    if(N==1){
	        if(M%2==0){
	            count=M/2;
	        }
	        else{
	            count=M/2+1;
	        }
	    }
	    else if(N>1){
	        if(N%2==0){
	            if(M%2==0){
	                count=(N/2)*(M/2);
	            }
	            else{
	                count=(N/2)*(M/2+1);
	            }
	        }
	        else{
	            if(M%2==0){
	                count=(N/2+1)*(M/2);
	            }
	            else{
	                count=(N/2+1)*(M/2+1);
	            }
	        }
	    }
	    std::cout << count << std::endl;
	}
	return 0;
}
