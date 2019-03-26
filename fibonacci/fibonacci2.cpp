//algorithm that calculates the fibonacci of a given number
//on console while also outputting the full result on
//an outfile.

#include <bits/stdc++.h>
using namespace std;

std::vector<long long> v;

unsigned long long fib(int n) {
	if (n < 2){
		return n;
	}
	if (v[n] > 0) {
		return v[n];
	}
	return v[n] = fib(n-1) + fib(n-2);
}

int main(){

	ofstream outfile;
    outfile.open("fibonacci.out");

	int n;
	cout << "Enter n for fibonacci: " << endl;
	cin >> n;
	v.resize(n);

	v.push_back(0);
	v.push_back(1);
	cout << fib(n) << endl;

	for(int i=0; i<=n; i++){
		outfile << v[i] << endl;
	}

	outfile.close();
}