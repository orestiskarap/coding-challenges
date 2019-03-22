//algorithm that calculates the fibonacci of a given number
//on console while also outputting the full result on
//an outfile.

#include <bits/stdc++.h>
using namespace std;

int main(){

	ofstream outfile;
    outfile.open("fibonacci.out");

	int n;
	int f;
	vector<int> fibonacci;
	
	fibonacci.push_back(0);
	fibonacci.push_back(1);

	cout << "Enter n for fibonacci: " << endl;
	cin >> n;

	
//f(n) = f(n-1) + f(n-2)
	
	for (int i=0; i<=n; i++){
		//f=fibonacci.back() + fibonacci.end()[-2];
		f= fibonacci[i] + fibonacci[i+1];
		fibonacci.push_back(f);
		outfile << fibonacci[i] << endl;
	}

	cout << fibonacci[n] << endl;
}