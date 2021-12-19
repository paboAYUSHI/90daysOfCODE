// Note that this problem is for testing fast input-output.
// We can use scanf, printf in C langauge, which are quite fast in general :)
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Usually, you can use scanf/printf in C++.
// However, if you want to use cin/cout, it is usually slow.
// To make it faster. Use cin.tie(NULL) and set ios_base::sync_with_stdio(false)
//to use these libraries must include #include <bits/stdc++.h> 
// See the below code for details.
//\n is faster than endl

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	int count=0;
	
	cin>>n>>k;
	for(int i=0;i<n;i++){
	    int ti;
	    cin>>ti;
	    if (ti%k==0){
	         count++;
	    }
	}
    cout<<count<<"\n";
	return 0;
}