#include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream infile;
	infile.open("input.txt");
	ofstream outfile;
	outfile.open("output.txt");

	vector<int> v;
	vector<float> avg;
	
	int N;
	float sum=0;
	

	if (infile.is_open()){
	        infile >> N;
	        for (int i = 0; i<N; i++){
	            int n;
	            infile>>n;
	            v.push_back(n);
	        }
	        infile.close();
	}

	for (int i=0; i<N; i++){
		for (int j=1+i; j <= v[0]; j++){
			sum = sum + v[j];
			cout<< "sum: " << sum << endl;
			}
			
			avg.push_back(sum/v[0]);
			sum = 0;
	}

	outfile << avg.size() << endl;
	
	for (int i=0; i < avg.size(); i++){
		outfile << avg[i] << " ";
		}
}