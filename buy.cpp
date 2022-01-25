#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	std::cin >> a>>b>>x>>y;
	int cost;
	cost=a*x+b*y;
	std::cout << cost << std::endl;
	return 0;
}
