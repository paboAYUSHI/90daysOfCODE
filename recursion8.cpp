
#include <iostream>
#include<math.h>
using namespace std;


int counting(int x, int no, int number)
{
	
	int val = (x - pow(number, no));
	if (val == 0)
		return 1;
	if (val < 0)
		return 0;

	return counting(val, no, number + 1) +
		counting(x, no, number + 1);
}
int countWays(int x, int n)
{
	return counting(x, n, 1);
}
int main()
{
	int x = 100, n = 4;
	cout << countWays(x, n);
	return 0;
}
