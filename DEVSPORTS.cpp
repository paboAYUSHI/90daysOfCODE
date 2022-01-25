#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
	    int Z,Y,A,B,C;
	    cin>>Z>>Y>>A>>B>>C;
	   // int count=0;
	    if(Z-Y>=0){
	        if(Z-Y>=A){
	            if(Z-Y-A>=B){
	                if(Z-Y-A-B>=C){
	                    std::cout << "YES" << std::endl;
	                }
	                else{
	                    std::cout << "NO" << std::endl;
	                }
	            }
	            else{
	                    std::cout << "NO" << std::endl;
	                }
	        }
	        else{
	                    std::cout << "NO" << std::endl;
	                }
	    }
	    
	}
	return 0;
}
