#include <bits/stdc++.h>
using namespace std;

int main(){
	ifstream infile;
	infile.open("input.txt");
	ofstream outfile;
	outfile.open("output.txt");

	int N;
	int P;
	float sum=0;

	vector<float> avg;
	int num[N-1];


	if (infile.is_open()){
	        infile >> N;
	        infile >> P;
	        for (int i = 0; i<N-1; i++){
	            int n;
	            infile>>n;
	            num[i]=n;
	        }
	        infile.close();
	}

	for (int i=0; i<P; i++){
		sum = sum + num[i];
	}
		avg.push_back(sum/P);

	for (int i=0; i<N-P-1; i++){
		sum = sum - num[i] + num[P+i];
		avg.push_back(sum/P);
	}
	outfile << avg.size() << endl;
	int size = avg.size();
	//if u use avg.size() in here u get segmentation fault.
	for (int i=0; i < size; i++){
		outfile << avg[i] << " ";
	}
	outfile << endl;
}