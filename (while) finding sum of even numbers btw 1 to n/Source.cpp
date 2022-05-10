#include<iostream>
using namespace std;
int main() {
	int n;
	int sum = 0;
	cout << "enter the end point\n";
	cin >> n;
	int i = 1;
	while (i <= n) {
		
		if (i % 2 == 0) 
			sum += i;
		
		++i;
	}
	cout << sum;


	return 0;
}