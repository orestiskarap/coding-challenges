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

	for (int i=1; i<=v[0]; i++){
		sum = sum + v[i];
	}
		avg.push_back(sum/v[0]);

	for (int i=1; i<N-v[0]; i++){
		sum = sum - v[v[0]+i] + v[v[0]+];
			cout<< "sum: " << sum << endl;
		avg.push_back(sum/v[0]);
	}

	// for (int i=1; i<N-v[0]; i++){
	// 		sum=sum - v[0+i] + v[v[0]+i]
	// 	}
	// 	// for (int k=; k<= v[0]; k--){
	// 	// 	sum = sum - v[k];
	// 	// }
	// 		cout<< "sum: " << sum << endl;
	// 		avg.push_back(sum/v[0]);
	// }

	outfile << avg.size() << endl;
	for (int i=0; i < avg.size(); i++){
		outfile << avg[i] << " ";
		}
}